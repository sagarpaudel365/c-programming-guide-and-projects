#include<stdio.h>
#include<string.h>

struct employee{

    int code;
    float salary;
    char name[20];
};
int main() {
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;

    //(*ptr).code = 101;// also can be writen as 
    ptr->code = 101;
    (*ptr).salary = 45000.456;
    strcpy((*ptr).name,"sagar");

    printf("Employee code : %d\n",e1.code);
    printf("Employee salary : %f\n",e1.salary);
    printf("Employee name : %s\n",e1.name);

    return 0;
}