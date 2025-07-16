#include<stdio.h>
int factorial(int x);
int main() {
    int a = 3;
    int result = factorial(a);
    printf("Factorial of %d is %d ",a,result);
    return 0;
}
int factorial(int x){
    printf("Calling factorial(%d)\n",x);
    if(x==1 || x==0 ){
        return 1;
    }
    else
    return x * (factorial(x-1));
}