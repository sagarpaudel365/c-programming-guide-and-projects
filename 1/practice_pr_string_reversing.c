#include<stdio.h>
#include<string.h>
int main() {
    int i=0;
    int len=0;
    char str1[20];
    char str2[20];
        printf("Enter a string:");
        scanf("%s",str1);
        while(str1[len]!='\0'){
            len++;
        }
        while(i!=(len)){
            str2[i]=str1[(len)-1-i];
            i++;
        }
        str2[i]='\0';
        printf("string 1:%s\n",str1);
        printf("string reverse:%s\n",str2);
    return 0;
}