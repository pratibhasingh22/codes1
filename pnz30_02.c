#include <stdio.h>
int main()
{
    int n;
    int pos=0,neg=0,zero=0;
    int arr[100];
    printf("enter the no of elements u want in the array");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > 0)
            pos+=1;
        else if (arr[i] < 0)
            neg+=1;
        else
            zero+=1;
    }

    // Output results
    printf("the count of pos=%d, Neg=%d, and Zero=%d is \n", pos, neg, zero);

    return 0;
}
    
