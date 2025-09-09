#include <stdio.h>
// 1. Global variable declared outside all functions
int globalNumber = 0;

void exampleFunction() {
    // 2. Local variable inside the function
    
    int localNumber = 5;
    // 4. Static local variable inside the function
    
    static int staticNumber = 0;
    staticNumber++;
    
    // 3. Variable inside a block
    {
        int blockNumber = 10;
        printf("Inside block: blockNumber = %d\n", blockNumber);
    }
    
    // Uncommenting the next line will cause an error because blockNumber is not accessible here
    // printf("Outside block: blockNumber = %d\n", blockNumber);
    // Using variables
    
    globalNumber += 1;
    printf("Local variable localNumber = %d\n", localNumber);
    printf("Static variable staticNumber = %d\n", staticNumber);
    printf("Global variable globalNumber = %d\n", globalNumber);


}
int main() {
    
    exampleFunction();
    exampleFunction();
    // Uncommenting the next line will cause an error because localNumber is not accessible here
    // printf("Trying to access localNumber in main: %d\n", localNumber);
    
    printf("Global variable accessed in main: %d\n", globalNumber);
    return 0;
}