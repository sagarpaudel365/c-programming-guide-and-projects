#include<stdio.h>


int main() {
int first_num,second_num,total,subtraction,multiplication;

printf("Enter the first number\n");
scanf("%d", &first_num);

printf("Enter the second number\n");
scanf("%d", &second_num);

total = first_num + second_num;
subtraction = first_num - second_num;
multiplication = first_num * second_num;

printf("The total is: %d\n" ,total);
printf("The subtraction is: %d\n",subtraction);
printf("The multiplication is: %d\n",multiplication);


return 0;
}