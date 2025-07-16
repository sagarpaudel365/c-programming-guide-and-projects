#include<stdio.h>

int main() {
    int num1;
    FILE *ptr;
    ptr=fopen("number.txt","r");
    fscanf(ptr,"%d",&num1);
    fclose(ptr);
    ptr=fopen("number.txt","w");
    fprintf(ptr, "%d", num1*2);
    fclose(ptr);
    return 0;
}