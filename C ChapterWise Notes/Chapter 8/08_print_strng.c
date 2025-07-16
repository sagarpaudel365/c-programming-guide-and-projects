#include<stdio.h>

int main() {
    char str[]={'S','I','J','A','L','\0'};
  //  char str[]="Sijal";
    char *ptr = str;
    while(*ptr!='\0'){
    printf("%c",*ptr);
    ptr++;
    }
    return 0;
}