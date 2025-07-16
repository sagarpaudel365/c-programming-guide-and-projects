#include<stdio.h>

int main() {
    char str1[30];
    char str2[30];
    int i=0;
    int len=0;
    printf("Enter a palindrome:\n");
    scanf("%s",str1);

    len=strlen(str1);
    while(str1[i]!='\0'){
        str2[i]=str1[len-1-i];
        i++;
    } 
    str2[i]='\0';
    if(strcmp(str1,str2)==0){
        printf("It is a palindrome\n");
    }
    else{
    printf("It is not a palindrome\n");
    }
    return 0;
}