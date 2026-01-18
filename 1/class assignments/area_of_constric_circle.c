#include<stdio.h>
#define PI 3.14
int main()
{
    float AREA,RADIUS,area,radius;
    printf("Enter the radius of big circle:");
    scanf("%f",&RADIUS);
    printf("Enter the radius of small circle:");
    scanf("%f",&radius);
    AREA=PI*RADIUS*RADIUS;
    area=PI*radius*radius;
    printf("The area of constric circle is %.2f",AREA-area);
    return 0;
}