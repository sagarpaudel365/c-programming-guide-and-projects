#include<stdio.h>

int main() {
    char str1[20];
    char str2[20];
    int i=0;
    printf("Enter your name:");
    scanf("%s",str1);
    while(str1[i]!='\0'){
        str2[i]=str1[i];
        i++;    
    }
    str2[i]='\0';
    printf("Your name is %s.\n",str2);
    return 0;
}