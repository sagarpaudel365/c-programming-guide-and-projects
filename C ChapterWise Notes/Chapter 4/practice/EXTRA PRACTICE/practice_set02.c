#include<stdio.h>

int main() {
    int a=10,n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);

    for(n; a; a--)
    {
        printf("%d * %d = %d\n",n,a,n*a);
    }
    return 0;
}