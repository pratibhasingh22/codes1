#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 5; i++) {        
        for (j = 6 - i; j <= 5; j++) { 
            printf("%d", j);
        }
        printf("\n"); 
    }
    return 0;
}

/*#include <stdio.h>

int main() {
    int i, j, start;
    for (i = 1; i <= 5; i++) {
        start = 5 - i + 1;   // calculate starting number of the row
        for (j = 0; j < i; j++) {
            printf("%d", start + j);
        }
        printf("\n");
    }
    return 0;
}
*/