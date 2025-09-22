#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {   // 5 groups
        int stars;
        switch (i) {
            case 1: stars = 1; break;
            case 2: stars = 2; break;
            case 3: stars = 5; break;
            case 4: stars = 3; break;
            case 5: stars = 1; break;
        }
    for (j = 0; j < stars; j++)
        printf("*\n");
        printf("  ");

    }

    return 0;
}
