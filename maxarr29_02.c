#include <stdio.h>
int main()
{
    int n;
    int arr[100];
    int max,min;
    printf("enter the no of elements u want in the array");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        
    }
    max = min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Max=%d and Min=%d\n of the array", max, min);

    return 0;
}