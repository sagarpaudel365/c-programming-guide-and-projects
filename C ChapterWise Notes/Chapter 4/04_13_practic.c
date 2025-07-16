#include<stdio.h>

int main() {
    int sum=0;
    int i=10;
    while(i)
    {
        sum=sum +i;
        i--;
    }
    printf("%d",sum);
    
    return 0;
}