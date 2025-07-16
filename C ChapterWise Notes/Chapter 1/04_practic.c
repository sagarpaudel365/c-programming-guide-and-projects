#include<stdio.h>

int main() {
    float p,t,r,SI;

    printf("Enter the principal:\n");
    scanf("%f", &p);

    printf("Enter the time:\n");
    scanf("%f", &t);

    printf("Enter the rate:\n");
    scanf("%f", &r);

    SI= (p*t*r)/100;

    printf("The simple interest is:%.2f\n",SI);
    return 0;
}