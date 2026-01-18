#include<stdio.h>
int main (){
    char a;
    printf("Enter a character:");
    scanf("%c",&a);
    switch(a){
    case 'A': case 'E': case 'I': case 'O': case 'U':
    case 'a': case 'e': case 'i': case 'o': case 'u':
    printf("It is a vowel.");
    break;

    default :
    printf("it is a consonent.");
}
    return 0;
} 