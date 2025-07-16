#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int number,i,n=1;
    srand(time(0));
    number = rand()%100 +1; //generates random number 1 to 100
    //printf("The number is %d",number);    
    //keep running the loop untill the number is gussed
    printf("***Try to guess the number between 1 to 100***\n");
    do
    {
        scanf("%d",&i);
        if(i>number)
        {
            printf("Try a lower number!\n");
        }
        else if(number>i)
        {
            printf("Try a higher number!\n");
        }
        else
        {
            printf("CONGRALUTION!!!!YOU GUESSED CORRECTLY\n");
            printf("no.of attempt: %d",n);
            break;
        }
        n++;
    } while (i != number);
    sleep(5);
    return 0;
}