#include<stdio.h>
#include<string.h>
int main() {
    char st1[32];
    char st2[32];
    char c;
    int x = 0;

    printf("Enter the value of first string\n");
    scanf("%s",st1);
    printf("Enter the value of second character by character string\n");

    while(c!='\n'){
        fflush(stdin);
        scanf("%c",&c);
        st2[x]=c;
        x++;
    }
    st2[x-1]='\0';
    printf("The value of st1 is %s\n",st1);
    printf("The value of st1 is %s\n",st2);
    printf("strcpm for these string is %d",strcmp(st1,st2));

    

    return 0;
}