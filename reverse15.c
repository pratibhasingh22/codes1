#include<stdio.h>
int main(){

    int num,digit,rev=0;
    printf("enter the num");
    scanf("%d",&num);
    while(num>0){
        digit=num%10;
        rev=rev*10+digit;
        num/=10;

    }
    printf("the reverse of the num is %d",rev);
    return 0;
}    

