#include<stdio.h>
int main(){
    int num,flag,digit,fact,sum=0;
    printf("enter a no ");
    scanf("%d",&num);
    flag=num;
    while(flag>0){
        digit=flag%10;
        fact=1;

        for(int i=1;i<=digit;i++){
            fact*=i;

        }
        sum+=fact;
        flag/=10;


    }
    if(sum==num){
        printf("%d is a strong no \n",&num);
    }
    else{
        printf("%d is not a strong no \n",&num);
        
    }
    return 0;

}