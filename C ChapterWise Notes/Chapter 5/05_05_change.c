#include<stdio.h>
void change(int a);

int main() {
    int b = 9;
    change(b);
    printf("%d",b);
    return 0;
}
void change(int a)
{
    int a = 77;
}