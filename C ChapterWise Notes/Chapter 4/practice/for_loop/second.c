#include<stdio.h>

int main() {
int n;
printf("Enter a number : \n");
scanf("%d", &n);

for(int a=n ; a ; a--)
{
    printf("%d\n",a);
}
    return 0;
}