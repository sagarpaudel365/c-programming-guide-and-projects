#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int number;
    srand(time(0));
    number = rand()%100 +1; //generates random number 1 to 100
    printf("The number is %d",number);    
    //keep running the loop untill the number is gussed
    return 0;
}