#include<stdio.h>

int main() {
    char str[50];
    int vowel=0;
    int consonant=0;
    int digit=0;
    int space=0;
    int len;
    char temp;
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);

    len=strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
    str[len-1]='\0';
    }
    for(int i=0;str[i]!='\0';i++){
        temp = tolower(str[i]);
    if (temp =='a' || temp=='e' ||temp=='i' || temp=='o' ||temp=='u'){
        vowel++;
    }
    else if(isalpha(temp)) {
        consonant++;
    }
    else if (isdigit(temp)){
        digit++;  
    }
    else if(isspace(temp)){
        space++;
    }
}
    puts(str);
    printf("There are %d vowels.\n",vowel);
    printf("There are %d consonent.\n",consonant);
    printf("There are %d digit.\n",digit);
    printf("There are %d space.\n",space);
    return 0;
}