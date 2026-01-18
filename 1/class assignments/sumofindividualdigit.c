#include<stdio.h>
int main()
{
    int num,a,b,c,d,sum;
    printf("Enter a 3 digit number: ");
    scanf("%d",&num);
    a = num%10;
    b=num/10;
    c=b%10;
    d=c/10;
    sum = a+c+d;
    printf("The sum is %d.",sum);
    return 0;
}