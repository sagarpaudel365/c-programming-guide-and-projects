#include<stdio.h>

int main() {
    int i=10;
    int sum=0;
    do
    {
        sum = sum +i;
        i--;
    } while (i);
    printf("%d",sum);
    return 0;
}