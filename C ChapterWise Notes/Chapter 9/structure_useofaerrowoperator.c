#include<stdio.h>

struct employee{
    int code;
    float salary;
    char name[20];
};
int main() {
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;

    ptr->code=001;
    ptr->salary=4587.565;
    strcpy(ptr->name,"Sagar");


    printf("Employee code:%d\n",e1.code);
    printf("Employee salary:%f\n",e1.salary);
    printf("Employee name:%s\n",e1.name);
    return 0;
}