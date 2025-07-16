#include<stdio.h>

int main() {
    int i=10,n;
    printf("Enter which number you want multiple table in backwards:");
    scanf("%d",&n);
    do
    {
        printf("%d * %d : %d\n",n,i,n*i);
        i--;
    } while (i>0);
    
    return 0;
}