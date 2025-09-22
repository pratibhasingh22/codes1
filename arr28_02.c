#include <stdio.h>
int main()
{
    int n;
    int arr[100];
    printf("enter the no of elements u want in the array");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        
    }
    for (int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }
    return 0;
}