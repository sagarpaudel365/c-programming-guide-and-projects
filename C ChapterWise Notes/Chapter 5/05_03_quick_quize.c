#include<stdio.h>
void good_morning()
{
    printf("Good morning\n");
}
void good_afternoon()
{
    printf("Good afternoon \n");
}
void good_night()
{
    printf("Good night\n");
}
int main() {
    printf("It's 6:00 AM \n");
    good_morning();
    printf("It's 1:00 pM \n");
    good_afternoon();
    printf("It's 10:00 PM \n");
    good_night();
    
    return 0;
}