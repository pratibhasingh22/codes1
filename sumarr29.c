#include <stdio.h>
int main()
{
    int n, sum = 0;
    int arr[100];
    printf("enter the no of elements u want in the array");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("the sum of the array elements%d\n", sum);

    return 0;
}