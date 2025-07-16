#include<stdio.h>

int main() {
    int array[4];
    printf("Enter any value of for student 1\n");
    scanf("%d",&array[0]);
    printf("Enter any value of for student 2\n");
    scanf("%d",&array[1]);
    printf("Enter any value of for student 3\n");
    scanf("%d",&array[2]);
    printf("Enter any value of for student 4\n");
    scanf("%d",&array[3]);
    
    printf("The mark of student 1 is %d\n",array[0]);
    printf("The mark of student 2 is %d\n",array[1]);
    printf("The mark of student 3 is %d\n",array[2]);
    printf("The mark of student 4 is %d\n",array[3]);

    return 0;
}