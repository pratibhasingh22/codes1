#include <stdio.h>
int main(){
    int num,pos=0,neg=0,zero=0;
    char flag='y';
    
    while(flag=='y'|| flag=='Y'){
        printf("enter a number:");
        scanf("%d",&num);

        if(num>0){
            pos+=1;
        }    

        else if(num<0){
            neg++;
        }
        else{
            zero+=1;

        }
        printf("do u want to continue of yes enter y:");
        scanf(" %c",&flag);
    }    
    printf("count of thr pos no is=%d\n",pos);
    printf("count of thr neg no is=%d\n",neg);
    printf("count of thr zero no is=%d\n",zero);

    
    return 0;
}

   
