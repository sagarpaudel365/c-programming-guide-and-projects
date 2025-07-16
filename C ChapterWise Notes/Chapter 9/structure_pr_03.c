#include<stdio.h>
#include<string.h>
    struct complex{
        float real;
        float imag;
    };
int main() {
        struct complex c1={3.0,3.0};
        printf("the complex number is: %.2f + %.2fi\n",c1.real,c1.imag);
    return 0;
}