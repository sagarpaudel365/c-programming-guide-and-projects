#include<stdio.h>
    void strcatmanual(char str1[],char str2[],char str3[]){
        int i=0;
        int j=0;
        
        while(str1[i]!='\0'){
            str3[j]=str1[i];
            i++;
            j++;
        }
        i=0;
        while(str2[i]!='\0'){
            str3[j]=str2[i];
            i++;
            j++;
        }
        str3[j]='\0';
    }
    
    int main() {
        char str1[20];
        char str2[20];
        char str3[40];
    printf("Enter first string:");
    scanf("%s",str1);
    printf("Enter second string:");
    scanf("%s",str2);
    strcatmanual(str1,str2,str3);
    printf("Manual strcat : %s",str3);
    return 0;
}