#include <stdio.h>
int main(){

    int num=1;
    //rows
    for (int i=1;i<=3;i++){

        for (int space=1;space<=3-i;space++)
        {
            printf(" ");//for spaces
        }
        for (int l=1;l<=i;l++){//for printing no s
            printf("%d  ",num++);
        }
        printf("\n");


    }
    


}