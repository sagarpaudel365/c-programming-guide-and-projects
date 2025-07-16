#include<stdio.h>
#include<string.h>

typedef struct employee{
    int code;
    float salary;
    char name[20];
} emp;
int main() {
    emp e1;
    emp *ptr;
    ptr = &e1;

    ptr->code = 101;
    ptr->salary = 45666.11;
    strcpy(ptr->name,"Sagar");

    printf("%d",e1.code);
    return 0;
}