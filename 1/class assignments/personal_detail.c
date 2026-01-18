#include<stdio.h>
int main()
{
    char Name[20];
    char Address[20];
    int age;
    long int contact;
    printf("Enter the your name:");
    fgets(Name,sizeof(Name),stdin);
    printf("Enter the your Address:");
    fgets(Address,sizeof(Address),stdin);
    printf("Enter the your age:");
    scanf("%d",&age);
    printf("Enter the your contact:");
    scanf("%d",&contact);
    printf("**Details**\n");
    printf("Name : %s\n",Name);
    printf("Address : %s\n",Address);
    printf("Age : %d\n",age);
    printf("Contacts : %d\n",contact);
    return 0;
}