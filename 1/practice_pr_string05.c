
#include<stdio.h>

int main() {
    char str1[20];
    char str2[20];
    int i=0;
    int ismatch=1;

    printf("Enter first string:");
    scanf("%s",str1);
    printf("Enter second string:");
    scanf("%s",str2);

    while(str1[i]!='\0' || str2[i]!='\0'){
       { if(str1[i]!=str2[i])
        {
            ismatch=0;
            break;
        }
    }
        i++;
    }
    {

        if(ismatch)
        {
            printf("They matched!");
        }
        else{
            printf("They did not matched!");
        }
    }
    return 0;

}