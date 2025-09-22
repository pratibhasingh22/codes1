#include<stdio.h>
int main(){
    int n;
    printf("enter the numto check");
    scanf("%d",&n);
    int prime=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            prime=1;
            break;

        }
    }
    if(prime==1){
        printf("%d is not prime\n",n);
    }
    else{
        printf("%d is prime\n",n);
    }
    return 0;
}