#include<stdio.h>
float avg(int a,int b,int c){
    return (a+b+c)/3.0;
}
int main() {
    int a=2,e=5,y=6;
    float average = avg(a,e,y);
    printf("%.2f",average);
    return 0;
}