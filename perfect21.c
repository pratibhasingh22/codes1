#include<stdio.h>
int main(){
    int num,sum=0;
    printf("enter a no");
    scanf("%d",&num);
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
            
        }
    }
    if(sum==num){
        printf("it is a perfect no");

    }
    else{
        printf("it is not a perfect no");
    }
    return 0;
}