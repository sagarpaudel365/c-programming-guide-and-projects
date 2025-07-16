#include<stdio.h>
    int sum(int a,int b){
        int c = a+b;
        b = 44;
        a = 12;
        return c;
    }
    int main()
    {
        int a = 4,b = 5;
        printf("The value of 4+7 is %d \n",sum(a,b));
        return 0;
    }
