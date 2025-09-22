#include<stdio.h>
int main(){
    int a,b,max,lcm;
    printf("enter two no");
    scanf("%d %d",&a,&b);
    max=(a>b)?a:b;
    lcm=max;
    while(1){
        if(lcm%a==0 &&lcm%b==0){
            break;

        }
        lcm++;

    }
    printf("lcm of %d and %d is %d\n,a,b,lcm");
    return 0;
}   