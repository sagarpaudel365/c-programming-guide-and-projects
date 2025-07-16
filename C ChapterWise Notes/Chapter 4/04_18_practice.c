#include<stdio.h>

int main() {
    int n,prime=0;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            prime=1;
            break;
        }
    }
    if(prime==1)
    {
        printf("Number is not prime");
    }
    else
    {
        printf("Number is prime");
    }
    
    return 0;
}