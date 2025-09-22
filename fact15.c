#include<stdio.h>
int main(){
    int num,fact=1;
    printf("enter a no.");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        fact*=i;
    }
    printf("the factorial of %d is %d\n",num,fact);
    return 0;

}