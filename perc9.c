#include<stdio.h>
int main(){
    int perc;
    printf("enter percentage");
    scanf("%d",&perc);
    if(perc<0 || perc>100){
        printf("invalid\n");
    }
    else if(perc>=90){
        printf("grade a\n");
    }
    else if(perc>=80){
        printf("grade b\n");
    }
    else if(perc>=70){
        printf("grade c\n");
    }
    else if(perc>=60){
        printf("grade d\n");

    }
    else{
        printf("grade f\n");
    }
    return 0;
}