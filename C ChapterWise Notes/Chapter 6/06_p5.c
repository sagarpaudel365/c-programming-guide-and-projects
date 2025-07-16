#include<stdio.h>

int main() {
    int n =364;
    int *ptr;
    int ** ptr_ptr;

    ptr = &n;
    ptr_ptr = &ptr;
    printf("%d ",**ptr_ptr);
    return 0;
}