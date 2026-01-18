#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    int sum;
    float percent;
    printf("Enter the mark of sunject 1:");
    scanf("%d",&a);
    printf("Enter the mark of sunject 2:");
    scanf("%d",&b);
    printf("Enter the mark of sunject 3:");
    scanf("%d",&c);
    printf("Enter the mark of sunject 4:");
    scanf("%d",&d);
    printf("Enter the mark of sunject 5:");
    scanf("%d",&e);
    sum = (a+b+c+d+e);
    percent= (sum/500.0)*100;
    printf("The sum is %d.\n",sum);
    printf("And the percent is %.2f.",percent);
    return 0;
}