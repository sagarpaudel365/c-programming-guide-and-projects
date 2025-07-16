#include<stdio.h>
void good_morning();
void good_afternoon();
void good_night();
int main() {
    
    good_morning();
    
    
    
  
    
    return 0;
}
void good_morning()
{
    printf("Good morning\n");
    good_afternoon();
}
void good_afternoon()
{
    printf("Good afternoon \n");
    good_night();
}
void good_night()
{
    printf("Good night\n");
}