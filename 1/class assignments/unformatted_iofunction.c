#include<stdio.h>
int main()
{
    char Name[20];
    char Address[20];
    char Collage[20];
    printf("Enter Name:\n");
    gets(Name);
    printf("Enter Address:\n");
    gets(Address);
    printf("Enter collage:\n");
    gets(Collage);
    puts(Name);
    puts(Address);
    puts(Collage);
    return 0;
}