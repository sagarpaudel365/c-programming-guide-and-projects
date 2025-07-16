#include<stdio.h>

int main() {
    char name[20];
    float salary;
    printf("Enter the name of the employee:\n");
    scanf("%s",name);
    printf("Enter the salary of the employee:\n");
    scanf("%f",&salary);

    FILE *ptr;
    ptr=fopen("employeeinfo.txt","w");
    fprintf(ptr,"Employee Name: %s\n",name);
    fprintf(ptr,"Employee salary : %f\n",salary);
    fclose(ptr);
    printf("program is succesfully exaguated");
    return 0;
}