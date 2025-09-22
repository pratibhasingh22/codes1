#include <stdio.h>
int main()
{
    int star = 1;
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        { // for spaces
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");
        star += 2;
    }

    star -= 4;
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        { // for spaces
            printf(" ");
        }
        for (int j = 1; j <= star; j++) // star
        {
            printf("*");
        }
        printf("\n");
        star -= 2;
    }
    return 0;
}
