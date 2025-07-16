#include<stdio.h>
#include<string.h>

struct sumvector{
    int a;
    int b;

};

int main() {
    
    struct sumvector v1,v2;
    printf("Enter the value of first number:\n");
    scanf("%d",&v1.a);

    printf("Enter the value of second number:\n");
    scanf("%d",&v1.b);

    printf("Enter the value of first number:\n");
    scanf("%d",&v2.a);

    printf("Enter the value of second number:\n");
    scanf("%d",&v2.b);

    printf("The sum of first and second vector is %d and %d\n",v1.a+v2.a,v2.b+v2.b);
    return 0;
}