#include<stdio.h>

int main() {
    int i=0;
    printf("The value before i++ is %d\n",i++);
    //i++ first print then increment
    printf("value after i++ is %d\n",i);
    //++i first incriment then print 
    i+=10;
    printf("The value after +10 is %d\n",i);
    i-=3;
    printf("The value after -3 is %d\n",i);
    i/=2;
    printf("The value after /2 is %d\n",i);
    i%=2;
    printf("The value after modulus 2 is %d\n",i);
    return 0;
}