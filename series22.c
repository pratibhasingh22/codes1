#include<stdio.h>
int main(){
    int n;
    float sum=1.0;
    printf("enter a no");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        sum=sum+(float)(2*i-1)/(2*i);

    }
    printf("approx sum:%.1f\n",sum);
    return 0;


}