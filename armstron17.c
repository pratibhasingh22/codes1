/*#include<stdio.h>
#include<math.h>
int main(){
    int num,temp,digits=0,digit,sum=0;
    printf("enter a no");
    scanf("%d",&num);
    temp=num;
    while(temp>0){
        digits++;
        temp/=10;
        
    }
    sum=0;
    temp=num;
    while(temp>0){
        digit=temp%10;
        sum+=pow(digit,digits);
        temp/=10;
    }
    if(sum==num){
        printf("it is a armstrong no\n");

    }
    else{
        printf("it is not a armstrong no\n");
    }
    return 0;

}*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, digits = 0, digit, sum = 0;

    printf("enter a no: ");
    scanf("%d", &num);

    temp = num;

    // count digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    sum = 0; // reset sum
    temp = num;

    // calculate Armstrong sum
    while (temp > 0) {
        digit = temp % 10;
        sum += (int)pow(digit, digits);  // cast to int
        temp /= 10;
    }

    if (sum == num)
        printf("It is an Armstrong no\n");
    else
        printf("It is not an Armstrong no\n");

    return 0;
}
