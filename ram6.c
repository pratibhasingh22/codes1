#include <stdio.h>

int main() {
    int L, a, b, c, d;
    int num1, num2;

    printf("Enter the limit (L): ");
    scanf("%d", &L);

    // Search all possible combinations
    for (a = 1; a <= L; a++) {
        for (b = a; b <= L; b++) {
            num1 = a*a*a + b*b*b;

            for (c = a+1; c <= L; c++) {
                for (d = c; d <= L; d++) {
                    num2 = c*c*c + d*d*d;

                    if (num1 == num2) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",
                               num1, a, b, c, d);
                    }
                }
            }
        }
    }

    return 0;
}
