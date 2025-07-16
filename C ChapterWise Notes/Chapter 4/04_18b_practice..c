#include<stdio.h>

int main() {
    int i,j=2,prime=0;
    printf("Enter the number:\n");
    scanf("%d",&i);

    if(i<=1)
    {
        printf("This is not prime\n");
        return 0;
    }
    while(j<i)
    {
        
        if(i%j==0)
        {
            prime=1; 
            break; 
        }
        j++;
      
    }
    if(prime==1)
    {
        printf("This is not prime");
    }
    else
    {
        printf("This is prime");
    }
    return 0;
}