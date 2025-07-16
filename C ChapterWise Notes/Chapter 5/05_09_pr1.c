#include<stdio.h>
float con (int a){
    return ((a * (9.0/5.0)) + 32.0 );
}
int main() {
    int celcius;
    printf("Enter celcius\n");
    scanf("%d",&celcius);
    float conversion = con(celcius);
    printf("farehenite temperature is %.2f ",conversion);
    return 0;
}