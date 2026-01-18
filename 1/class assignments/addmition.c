#include<stdio.h>
int main()
{
    float physics,maths,chemistry;
    printf("Enter the marks of physics:");
    scanf("%f",&physics);
    printf("Enter the marks of chemistry:");
    scanf("%f",&chemistry);
    printf("Enter the marks of maths:");
    scanf("%f",&maths);
    float sum = physics + chemistry + maths;
    if(sum>=200 && physics >=40 && chemistry >= 40 && maths >= 40)
    {
      printf("Student can be addmited.");
    }
    else
    {
        printf("Student can't be assmited.");
    }
    return 0;
}