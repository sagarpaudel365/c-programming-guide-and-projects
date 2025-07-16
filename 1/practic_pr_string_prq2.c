#include<stdio.h>

int main() {
    int i=0;
    char *ptr;
    char str1[20];
    ptr = str1;
    printf("Enter your name:");
    scanf("%s",str1);
    while((*ptr)!='\0'){
        ptr++;
        i++;
    }
    printf("there are %d letters in your name.",i);
    return 0;
}