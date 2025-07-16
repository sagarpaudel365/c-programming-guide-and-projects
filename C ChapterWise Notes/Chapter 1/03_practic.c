#include<stdio.h>

int main() {
float c,f;

printf("Enter the celcius:");
scanf("%f",&c);

f=(c*(9.0/5.0))+32;

printf("The temperature in degree farenheit is:%.2f",f);
    return 0;
}