#include<stdio.h>
int main()
{
    int a = 2;
    int b = 3;
    printf("before swapping:\n");
    printf("a = %d\n",a);    
    printf("b = %d\n",b);  
    a = a +b;
    a = a-b;
    b = b-a;
    b = b+a;
    printf("after swapping:\n");
    printf("a = %d\n",a);    
    printf("b = %d\n",b);    
    return 0;
}