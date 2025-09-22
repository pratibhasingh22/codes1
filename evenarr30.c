#include <stdio.h>
int main()
{
    int n,even=0,odd=0;
    int arr[100];
    printf("enter the no of elements u want in the array");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            even+=1;
        else
            odd+=1;
    }

    // Output results
    printf("the count of even=%d and Odd=%d", even, odd);

    return 0;
}
        
    