#include<stdio.h>
int main(){
    int day;
    printf("enter the day of the week");
    scanf("%d",&day);
    switch(day){
        case 1:
        printf("monday\n"); 
        break;
        case 2:  
        printf("Tuesday\n"); 
        break; 
        case 3:  
        printf("wednesday\n"); 
        break;
        case 4:  
        printf("thursday\n"); 
        break;
        case 5:  
        printf("friday\n"); 
        break;
        case 6:  
        printf("saturday\n"); 
        break;
        case 7:  
        printf("sunday\n");
        default:
        printf("choice wrong\n");
    }
    return 0; 
}    