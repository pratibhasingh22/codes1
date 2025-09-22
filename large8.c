#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter three sides");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a>=c){
        printf("the largest is %d",a);

    }
    else if(b>=b && b>=c){
        printf("the largest is %d",b);
    }
    else{
        printf("the largest is %d",c);
    }    
    return 0;

}