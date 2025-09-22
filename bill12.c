#include<stdio.h>
int main(){
    int units;
    int bills=0;
    printf("enter units consumed:");
    scanf("%d",&units);
    if(units<=100){
        bills=units*5;

    }
    else if (units <= 200) {
        bills = (100 * 5) + (units - 100) * 7;
    } 
    else if (units <= 300) {
        bills = (100 * 5) + (100 * 7) + (units - 200) * 10;
    } 
    else {
        bills = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 12;
    }

    printf("Bills: rupees%d\n", bills);

    return 0;
}