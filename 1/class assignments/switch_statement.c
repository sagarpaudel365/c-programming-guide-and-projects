#include<stdio.h>
int main(){
    int a;
    printf("Enter a value from 1 to 4");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("This is 1st case.");
        break;
    case 2:
    printf("This is 2nd case.");
    break;
    case 3:
    printf("This is 3rd case.");
    break;
    case 4:
    printf("This is 4th case.");
    break;
    default:
    printf("Invilid entry");
        break;
    }
    return 0;
}