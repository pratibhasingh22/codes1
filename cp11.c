#include<stdio.h>
int main(){
    float cp,sp,per;
    printf("enter cp and sp");
    scanf("%d %d",&cp,&sp);
    if(sp>cp){
        per=((sp-cp)/cp)*100;
        printf("profit percent is %f%%\n",per);
    }
    else if(sp<cp){
        per=((cp-sp)/cp)*100;
        printf("loss percent is %f%%\n",per);

    }
    return 0;
}