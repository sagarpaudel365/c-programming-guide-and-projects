#include<stdio.h>

int main() {
    int len=0;
    int i=0;
    char temp;
    char str[20];
    printf("Enter a string:");
    scanf("%s",str);
    while(str[len]!='\0'){
        len++;
    }
    for(int i=0;i<(len/2);i++){
        temp = str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;
    }
    printf("The reverse string is:%s",str);
    return 0;
}