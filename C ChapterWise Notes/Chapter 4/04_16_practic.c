#include<stdio.h>

int main() {
    int n,factorial=1;
    printf("Enter the number you want factorial of:");
    scanf("%d",&n);
    for(int a=n; a; a--)
    {
        factorial=factorial * a ;
    }
    printf("%d",factorial);
    return 0;
}