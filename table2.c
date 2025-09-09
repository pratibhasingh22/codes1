#include <stdio.h>
int main(){
    int num,i,prod=1;

    printf("enter a no");
    scanf("%d",&num);

    for (i=1;i<=10;i++){
        
        prod=num*i;
        printf("%d * %d=%d\n",num,i,prod);
        
    }
    return 0;
}
