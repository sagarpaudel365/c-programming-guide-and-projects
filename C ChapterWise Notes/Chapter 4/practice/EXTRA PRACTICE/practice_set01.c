#include<stdio.h>

int main() {
    int a=1,n;
    printf("Enter the number you want multiple of:\n");
    scanf("%d",&n);

    while(a<=10)
    {
        printf("%d * %d = %d \n",n,a,n*a);
        a++;
    }
    return 0;
}