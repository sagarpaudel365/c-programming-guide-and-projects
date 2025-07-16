#include<stdio.h>

int main() {
    FILE *ptr;
    char c;
    ptr = fopen("source.txt","r"); 
    c = fgetc(ptr);
    FILE *wptr;
    wptr = fopen("reasult1.txt","w");
    while(c!=EOF){
        fputc(c,wptr);
        c = fgetc(ptr);
    }
    FILE *wptrtwo;
    wptrtwo = fopen("reasult2.txt","w");
    while(c!=EOF){
        fputc(c,wptrtwo);
        c = fgetc(ptr);
    }
    fclose(ptr);
    fclose(wptr);
    fclose(wptrtwo);
    printf("Two new file has been created in which there is copyed content from the source\n");
    return 0;
}