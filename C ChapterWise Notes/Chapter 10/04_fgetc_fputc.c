#include<stdio.h>

int main() {
    FILE *ptr;
    // fgetc demo for reading a file
    //ptr = fopen("getc_demo.txt","r");
    //char c = fgetc(ptr);
    //printf("The value of my characrter is %c\n",fgetc(ptr));
    //printf("The value of my characrter is %c\n",fgetc(ptr));
    //printf("The value of my characrter is %c\n",fgetc(ptr));
    //printf("The value of my characrter is %c\n",fgetc(ptr));
    //printf("The value of my characrter is %c\n",fgetc(ptr));
    ptr=fopen("putcdemo.c","w");
    putc('c',ptr);
    fclose(ptr);
    return 0;
}