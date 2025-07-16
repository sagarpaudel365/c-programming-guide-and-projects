#include<stdio.h>

int main() {
    int marks;
    char grades;
    printf("Enter the marks obtain by the student:\n");
    scanf("%d",&marks);

    if(marks>100 || marks<0)
    {
        printf("Invalid marks input\n");
    }
    else
    {
    switch (marks/10)
    {
    case 10:
    case 9:
        grades='A';
    break;
    case 8:
        grades='B';
    break;
    case 7:
        grades='C';
    break;
    case 6:
        grades='D';
    break;
    default:
        grades='E';
    break;
    }
    printf("Student has secure %c grade\n",grades);
    }
    return 0;

}