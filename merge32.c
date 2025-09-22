#include <stdio.h>
int main()
{
    int i, j;
    int num1, num2;
    int arr1[50], arr2[50];
    int newarr[100];
    printf("enter the elements to be entered in the array1\n");
    scanf("%d", &num1); // taking input of first array
    for (i = 0; i < num1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("enter the elements to be entered in the array2\n");
    scanf("%d", &num2); // taking input of second array
    for (i = 0; i < num2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < num1; i++) // moving the element of first array in the newarr
    {
        newarr[i] = arr1[i];
    }

    for (j = 0; j < num2; j++) // moving the element of second  array in the newarr
    {
        newarr[i + j] = arr2[j];
    }

    for (i = 0; i < num1 + num2; i++) // add all the elements to a single array
    {
        printf("%d ", newarr[i]);
    }
    printf("\n");

    return 0;
}
