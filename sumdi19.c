#include<stdio.h>
int main(){
    int num,sum=0,temp;
    printf("enter a no");
    scanf("%d",&num);

    temp=num;
    while(temp>0){
        int digit=temp%10;
        sum+=digit;
        temp/=10;

    }
    printf("sum of digits of %d is %d\n",num,sum);
    return 0;
}