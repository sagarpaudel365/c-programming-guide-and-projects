#include<stdio.h>

int main() {
    int i=0;
    char word[100];
    printf("Enter any word:");
    fgets(word,sizeof(word),stdin);
    while(word[i]!='\0'){
        i++;
    }
    if( i>0 && word[i]=='\0'){
        i--;
    }
    printf("Your word has %d letters\n.",i);
    return 0;
}