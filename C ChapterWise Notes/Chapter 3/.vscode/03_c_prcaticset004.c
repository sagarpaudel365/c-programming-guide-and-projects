#include<stdio.h>

int main() {
    int year;
    printf("Enter the year\n");
    scanf("%d",&year);
    if((year%4==0 && year%100!=00) || (year%400==0))
    {
        printf("%d is a leap year\n",year);
    }
    else
    {
        printf("%d is not leap year\n",year);
    }
    return 0;
}