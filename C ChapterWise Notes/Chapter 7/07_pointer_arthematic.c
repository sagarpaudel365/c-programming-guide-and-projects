#include<stdio.h>

int main() {
    int a = 30;
    int *ptr =&a;
    printf("The value of ptr is %u\n",ptr);
    printf("The value of a is %d\n",*ptr);
    ptr++;
    printf("The value of ptr is %u\n",ptr);
    printf("The value of a is %d\n",*ptr);
    ptr--;
    printf("The value of ptr is %u\n",ptr);
    printf("The value of a is %d\n",*ptr);
    ptr=ptr +1;
    printf("The value of ptr is %u\n",ptr);
    printf("The value of a is %d\n",*ptr);
    ptr=ptr-3;
    printf("The value of ptr is %u\n",ptr);
    printf("The value of a is %d\n",*ptr);


    char t;
    char *cptr=&t;
    printf("the valur of cptr is %u\n",cptr);
    cptr++;
    printf("the valur of cptr is %u\n",cptr);
    cptr--;
    printf("the valur of cptr is %u\n",cptr);
    

    float f;
    float *fptr=&f;
    printf("The value of fptr is %u\n",fptr);
    fptr++;
    printf("The value of fptr is %u\n",fptr);
    fptr++;
    printf("The value of fptr is %u\n",fptr);
    fptr--;
    printf("The value of fptr is %u\n",fptr);
    return 0;
}