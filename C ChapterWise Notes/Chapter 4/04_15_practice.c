#include<stdio.h>

int main() {
    int i=1,sum=0,a=10,n=8;
    for(i; i<=10; i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
        while(a)
        {
            sum = sum + (n*i);
            a--;
        }
        printf("sum of multiplication table of 8 is: %d\n",sum);
        
    return 0;
}