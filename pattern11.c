#include <stdio.h>
int main() {
    int n=5, i, j;
    for(i=1; i<=n; i++) {
        for(j=1; j<=i; j++) {
            if(j==1 || j==i || i==n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}
