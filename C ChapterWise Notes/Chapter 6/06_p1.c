#include<stdio.h>

int main() {
    int a =5 ;
    int *p = &a; 
    printf("The address of a is %u\n",&a);
    printf("The address of a is %u",p);
    
    return 0;
}