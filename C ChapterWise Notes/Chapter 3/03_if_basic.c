#include<stdio.h>
//c program to check wether the number is even or odd.

int main() {
    int a;
    printf("Enter any number:\n");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("The entered number is even.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }
    
    return 0;
}