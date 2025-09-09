#include <stdio.h>
int main() {
    int rows = 5, i, j, space, k;

    for (i = 0; i < rows; i++) {
        // print spaces for alignment
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }

        // print numbers in each row
        k = 1; // first number is always 1
        for (j = 0; j <= i; j++) {
            printf("%4d", k);  // print with spacing
            k = k * (i - j) / (j + 1); 
        }

        printf("\n"); // move to next row
    }

    return 0;
}
