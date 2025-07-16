#include<stdio.h>

int main() {
    int a;
    printf("Enter a\n");
    scanf("%d",&a);
    (a>8)? printf("a is greater then 8\n"):printf("a is less then 8\n");
    (a%2==0)? printf("a is even\n"):printf("a is odd\n");
    return 0;
}