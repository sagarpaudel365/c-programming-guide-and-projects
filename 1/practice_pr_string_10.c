#include<stdio.h>
#include<string.h>
int main() {
    char str[1000];
    char ch[1000];
    int b=0;
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    for(int i=0;str[i]!='\0';i++){
      if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
    str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U')
    ch[b++] = str[i];
}
    printf("Your sentence without any vowels looks like this:\n");
    printf("%s\n",ch);
    return 0;
}