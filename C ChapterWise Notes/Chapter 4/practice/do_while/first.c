#include<stdio.h>

int main() {
    int n,i=1;
    printf("Enter the no of natural number you want\n");
    scanf("%d", &n);
    do{
        printf("%d\n",i);
        i++;
    }
    while(i<=n);
    return 0;
}