#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int freq[256]= {0};

    printf("Enter any sentence:");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")]='\0';

    for(int i=0; str[i] !='\0';i++) {
        freq[(unsigned char)str[i]]++;
    }
    printf("\n character frequency:\n");
    for(int i=0; i<256; i++) {
        if(freq[i] > 0) {
        printf(" '%c' = %d\n",i,freq[i]);
    }
}

    return 0;
}