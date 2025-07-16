#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    char name[50];
    float salary;
};

int main() {
    
    struct employee e1;
    e1.code = 230;
    strcpy(e1.name,"Sagar");
    e1.salary = 400.45 ;

    printf("Employee name  : %s\n",e1.name);
    printf("employee code  : %d\n",e1.code);
    printf("Employee salary: %.3f\n",e1.salary);
    return 0;
}