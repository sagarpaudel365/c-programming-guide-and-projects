#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

int main() {
    struct employee sijal ={ 001, 40000.4,"Sagar"};

    printf("employee code :%d\n",sijal.code);
    printf("employee salary :%f\n",sijal.salary);
    printf("employee Name :%s\n",sijal.name);

    return 0;
}