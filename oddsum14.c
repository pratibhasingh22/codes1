#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = n * n;  // sum of first n odd numbers
    printf("Sum of first %d odd numbers is: %d\n", n, sum);

    return 0;
}

