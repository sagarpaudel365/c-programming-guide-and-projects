#include<stdio.h>

int main() {
    int i,j=2,prime=1;
    printf("Enter the nunmber:\n");
    scanf("%d",&i);

    if(i<=1)
    {
        printf("IT IS NOT A PRIME NUMBER");
        return 0;
    }

    do{
        if(i%j==0)
        {
            prime=0;
            break;
        }
        j++;
    }
    while(j<i);

    if(prime==0 )
    {
        printf("IT IS A NOT PRIME NUMBER.\n");
    }
    else
    {
        printf("IT IS A PRIME NUMBER.\n");
    }
    return 0;
}