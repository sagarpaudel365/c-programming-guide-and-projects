#include<stdio.h>

int main() {
    char str1[20];
    char str2[20];
    printf("Enter your name:");
    scanf("%s",str2);
    printf("Enter your name to conform:");
    scanf("%s",str1);
    if((strcmp(str2,str1))==0)
    {
        printf("conformed!");
    }
    else
    {
        printf("Sorry,the name do not match!");
    }
    return 0;
}