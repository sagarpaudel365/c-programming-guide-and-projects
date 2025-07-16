#include<stdio.h>
void tenx(int *a){
    *a = *a * 10;
}
int main() {
   int y = 3;
   tenx(&y);
   printf("The value of y is %d",y); 
    return 0;
}