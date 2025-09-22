/*#include<stdio.h>
int main(){
    int num;
    long long prod=1;

    printf("enter the num");
    scanf("%d",&num);
    for(int i=2;i<=num;i+2){
        prod*=i;
    }
    printf("the product of even from 1 to %d is %d\n",num,prod);
    return 0;
}
*/
#include <stdio.h>

int main() {
    int n;
    long long product = 1; // Use long long to handle large products
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 2; i <= n; i += 2) { // iterate over even numbers
        product *= i;
    }

    printf("Product of even numbers from 1 to %d is: %lld\n", n, product);
    return 0;
}
