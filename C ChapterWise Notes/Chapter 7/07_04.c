#include<stdio.h>

int main() {
    int arra[10];
    int i;
    printf("Enter the number you want multiplication of : ");
    scanf("%d",&i);

    for(int q=0;q<10;q++){
        arra[q]= i * (q+1);
    }

    for(int q=0;q<10;q++){
        printf(" %d x %d : %d\n",i,(q+1),arra[q]);
    }
    return 0;
}