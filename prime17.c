#include<stdio.h>
int main(){
    int num,i,flag=0;
    printf("enter a no");
    scanf("%d",&num);
    if(num<=1){
        printf("not a prime no\n");
    
    }
    for(i=2;i<num;i++){
        if(num%i==0){
            flag++;
            break;
            

        }
    }    
    if (flag == 0)
        printf("Prime\n");
    else
        printf("Not prime\n");

    return 0;
}