#include<stdio.h>

int main() {
    FILE *ptr;
    int num1,num2,num3;
    ptr = fopen("number.txt","r");
    fscanf(ptr,"%d",&num1);
    fscanf(ptr,"%d",&num2);
    fscanf(ptr,"%d",&num3);
    printf("the values of a,b,and c is %d,%d,and %d\n",num1,num2,num3);
    return 0;
}