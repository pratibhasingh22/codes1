#include<stdio.h>
int main(){
    int num,temp,product=1;
    printf("enter a no");
    scanf("%d",&num);
    temp=num;
    while(temp>0){
        int digit=temp%10;
        if(digit%2!=0){
            product*=digit;

        }
        temp/=10;

    }
    printf("product of odd digits:%d\n",product);
    return 0;
}
