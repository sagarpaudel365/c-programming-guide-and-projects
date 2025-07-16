#include<stdio.h>

int main() {
    int age;
    int vippass=0;

    printf("Do you have vip pass? Enter 0 if you don't,1 if you have.");
    scanf("%d",&vippass);

    printf("Enter your age:");
    scanf("%d",&age);

    if((age>=18 && age<=90)||(vippass==1))
    {
        printf("You can drive.");
    }
    else
    {
        printf("You can not drive.");
    }
    return 0;
}