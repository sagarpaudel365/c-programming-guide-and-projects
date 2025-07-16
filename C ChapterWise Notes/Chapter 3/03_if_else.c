#include<stdio.h>

int main() {
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if (age>=90)
    {
        printf("You can not drive\n");
    }
    else
    {
        printf("you can drive\n");
    }
    if(age==50)
    {
        printf ("you are half centuary\n");
    }
    return 0;
}