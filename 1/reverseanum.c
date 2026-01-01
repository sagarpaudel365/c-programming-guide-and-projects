#include<stdio.h>
int main(){
    int num,rem,que,result=0;
    printf("Enter a number:\n");
    scanf("%d",&num);
    while(num!=0){
        rem=num%10;
        result=(result*10)+rem;
        num=num/10;
    }
   printf("The reverse is %d",result);


    return 0;
}