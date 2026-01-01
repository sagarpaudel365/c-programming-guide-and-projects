#include<stdio.h>
int main(){
    int main(){
    int a,num,rem,que,result=0;
    printf("Enter a number:\n");
    scanf("%d",&a);
    num=a;
    while(num!=0){
        rem=num%10;
        result=(result*10)+rem;
        num=num/10;
    }
    if(result==a){
        printf("it is a Plalendrome.");
    }
    else{
        printf("it is not a palendrome.");
    }
    return 0;
}