#include<stdio.h>
int main(){
    int b=0,d=1,c,result;
    printf("Enter how many number you want:\n");
    scanf("%d",&c);
    for(int a=0;c>a;a++){
        printf("%d,",b);
        result = b + d;
        b=d;
        d=result;
    }
    return 0;
}