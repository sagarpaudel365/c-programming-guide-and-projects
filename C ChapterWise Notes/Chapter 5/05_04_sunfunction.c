#include<stdio.h>
int sum(int a,int b);


int main() {
    int c = sum(7,9);
    printf("%d",c);
    return 0;
}
int sum(int a,int b)
{
    int result = a + b;
    return result;
}