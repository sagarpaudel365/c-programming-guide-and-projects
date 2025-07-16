#include<stdio.h>

int main() {
    char ch;
    printf("Enter the character:\n");
    scanf("%c",&ch);
    //97-122=a-z
    if(ch>=97 && ch<=122)
    {
        printf("It is lower case\n");
    }
    else
    {
        printf("It is not lower case\n");
    }
    return 0;
}