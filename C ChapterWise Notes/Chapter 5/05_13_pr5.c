#include<stdio.h>
void star(int a);
int main() {
    int b;
    printf("Enter the number\n");
    scanf("%d",&b);
    star(b);
    return 0;
}
void star(int a){
    if(a==1){
        printf("*\n");
        return;
    }
    star(a-1);
    for (int z=0;z<(2*a-1);z++){
        printf("*");
    }
    printf("\n");
}