#include <stdio.h>
int main()
{
    int i, j, star = 1;
    int n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");
        star += 2;
    }
    star -= 4;
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");
        star -= 2;
    }
    return 0;
}