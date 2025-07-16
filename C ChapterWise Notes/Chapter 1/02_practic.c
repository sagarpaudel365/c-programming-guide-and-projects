#include<stdio.h>

int main() {
    float radius,pi,area,height,volume;
    pi=3.1416;
    printf("Enter the radius of circle=");
    scanf("%f", &radius);
    area = pi*radius*radius;
    printf("The area of circle is  %f \n",area);
    printf("Enter the height of cylinder=");
    scanf("%f",&height);
    volume=pi*radius*radius*height;
    printf("The volume of cylinder is %.2f:",volume);
    return 0;
}