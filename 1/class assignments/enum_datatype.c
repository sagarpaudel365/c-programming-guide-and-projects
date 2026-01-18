#include<stdio.h>
enum week
{
    sunday,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
};
int main()
{
    enum week current = sunday;
    enum week second = monday;
    printf("current day: %d\n",current);
    printf("second day: %d\n",second);
    return 0;
}