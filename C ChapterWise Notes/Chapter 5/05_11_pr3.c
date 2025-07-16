#include<stdio.h>
int seq (int a){
    if(a==1 ){
        return 1;
    } else if (a== 0){
        return 0;
    }
    else
    return (seq(a-1))+(seq(a-2));
}
int main() {
    int b;
    printf("Enter a number to calculate nth term of number\n");
    scanf("%d",&b);
    int num = seq(b);
    printf("The nth term is %d \n",num);
    return 0;
}