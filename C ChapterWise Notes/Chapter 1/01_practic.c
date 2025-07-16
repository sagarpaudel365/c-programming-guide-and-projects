#include<stdio.h>

int main() {
    float Length,Breadth,Area;

    printf("Enter the Length of the rectangle:");
    scanf("%f",&Length);
    
    printf("Enter the bredth of the rectangle:");
    scanf("%f",&Breadth);

    Area = Length * Breadth ;

    printf("The area of reactangle is: %.2f ", Area);


    return 0;
}