#include<stdio.h>

int main() {
   // char s[40];
   char* s;
    printf("Enter your name:");
    gets(s);
    puts(s);
    printf("your name is %s.",s);
    return 0;
}