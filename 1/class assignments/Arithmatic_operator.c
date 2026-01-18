#include<stdio.h>
int main(){
    int a,b, sum,diff, mul, div, mod;
    printf("Enter two Numbers : ");
    scanf("%d %d",&a,&b);
    sum = a+b; 
    diff = a-b;
    mul = a*b;
    div = a/b;
    mod = a%b;
    printf("\n The sum of two number %d and %d is %d",a,b,sum);
    printf("\n The difference of %d and %d is %d",a,b,diff);
    printf("\n The multiplication of %d and %d is %d",a,b,mul);
    printf("\n The division of %d and %d is %d",a,b,div);
    printf("\n The modulus of %d and %d is %d ",a,b,mod);
    return 0; 
}