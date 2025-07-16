#include<stdio.h>

int main() {
    int n,i=1;
    printf("Enter how many natural number you want\n");
    scanf("%d",&n);
    do
    {
        printf("%d\n",i);
        i++;
    } while (i<=n);
    
    return 0;
}