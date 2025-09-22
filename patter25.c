#include <stdio.h>

int main() {
    int n = 5;     
    int i, j, spaces;

    for (i = 0; i < n; i++) {
        spaces = i; 

        // print spaces
        for (j = 0; j < spaces; j++) {
            printf(" ");
        }

        // print stars
        for (j = 0; j <n - i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
