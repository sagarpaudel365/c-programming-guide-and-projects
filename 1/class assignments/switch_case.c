#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number from 1-7 for each day of the week.\n");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("Sunday.");
        break;
    case 2:
        printf("Monday.");
        break;
    case 3:
        printf("Tuesday.");
        break;
    case 4:
        printf("Wednesday.");
        break;
    case 5:
        printf("Thursday.");
    case 6:
        printf("Friday.");
    case 7:
        printf("Saturday.");
    default :
        printf("Enter form 1-7");
    }
    return 0;
}