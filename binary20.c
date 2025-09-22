#include<stdio.h>

int main(){
    int num,flag,next=1;
    printf("enter the no");
    scanf("%d",&num);
    flag=num;
    while(flag>0){
        int digit=flag%10;//remove last digit
        if(digit!=0 && digit!=1){
            printf("only binary no allowed\n");
        }
        else{
            digit=(digit==0)?1:0;


        }
        next*=10;//move to next digit
        flag/=10;//remove last digit
    }
    printf("")

}