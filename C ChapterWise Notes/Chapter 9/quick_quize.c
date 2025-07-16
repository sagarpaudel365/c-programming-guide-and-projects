#include<stdio.h>
#include<string.h>

struct employees{
    int code;
    float salary;
    char name[100];
};

int main() {
    struct employees e1,e2,e3;
    printf("Enter employee code :");
    scanf("%d",&e1.code);
    printf("Enter employee salary :");
    scanf("%f",&e1.salary);
    getchar();
    printf("Enter employee Name :");
    fgets(e1.name,sizeof(e1.name),stdin);

    printf("Enter employee code :");
    scanf("%d",&e2.code);
    printf("Enter employee salary :");
    scanf("%f",&e2.salary);
    getchar();
    printf("Enter employee Name :");
    fgets(e2.name,sizeof(e2.name),stdin);

    printf("Enter employee code :");
    scanf("%d",&e3.code);
    printf("Enter employee salary :");
    scanf("%f",&e3.salary);
    getchar();
    printf("Enter employee Name :");
    fgets(e3.name,sizeof(e3.name),stdin);
    return 0;
}