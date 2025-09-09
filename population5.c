#include <stdio.h>

int main() {
    double pop = 100000,rate = 0.10;  
    int year;

    for (year = 1; year <= 10; year++) {
        pop = pop * (1 + rate);
        printf("%d\t%.0lf\n", year, pop);
    }

    return 0;
}
