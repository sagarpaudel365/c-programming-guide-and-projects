#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};
void show(struct employee emp){
 printf("The code of employee is :%d\n",emp.code);    
 printf("The salary of employee is :%f\n",emp.salary);    
 printf("The Name of employee is :%s\n",emp.name);    
}
int main() {
    struct employee e1;
    struct employee *ptr;

    ptr=&e1;
    ptr->code =101;
    ptr->salary =45000.5455;
    strcpy(ptr->name,"Sagar");
    show(e1); 
    return 0;
}