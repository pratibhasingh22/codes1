#include<stdio.h>
int main(){
    int days,fine=0;
    printf("enter no of late days");
    scanf("%d",&days);
    if(days<=0){
        printf("no fine to be given\n");

    }
    else if(days<=5){
        fine=days*2;
        printf("fine is rupees %d\n",fine);
    }
    else if(days<=10){
        fine=(5*2)+(days-5)*4;
        printf("fine is rupees %d\n",fine);

    }
    else if(days<=30){
        fine=(5*2)+(5*4)+(days-10)*6;
        printf("fine is rupees\n",fine);

    }
    else{
        printf("membership cancelled\n");
    }
    return 0;

}    