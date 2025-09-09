#include <stdio.h>
int main() {
    int n=5, i, j;

    // Upper half
    for(i=1; i<=n; i++) {
        // left stars
        for(j=1; j<=i; j++) {
            printf("*");
        }
        // spaces
        for(j=1; j<=2*(n-i); j++) {
            printf(" ");
        }
        // right stars
        for(j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for(i=n; i>=1; i--) {
        // left stars
        for(j=1; j<=i; j++) {
            printf("*");
        }
        // spaces
        for(j=1; j<=2*(n-i); j++) {
            printf(" ");
        }
        // right stars
        for(j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
