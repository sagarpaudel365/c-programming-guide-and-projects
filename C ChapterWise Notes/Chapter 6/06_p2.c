#include<stdio.h>
void temp(int y){
    printf("The address of i at function is %u\n",&y);
}
int main() {
    int i=5;
    printf("The address of i is %u\n",&i);
    temp(i);
    printf("The address is %u\n",&i);
   


    return 0;
}