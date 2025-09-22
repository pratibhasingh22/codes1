#include<stdio.h>
int main(){
    int num;
    printf("enter a integer");
    scanf("%d",&num);
    if(num>=0){
        if(num==0){
            printf("zero\n");
        }
        else{
            printf("no is positive\n");
        }
    }
    else{
        printf("the no is neg\n");
    }
    return 0;
}