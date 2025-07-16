#include<stdio.h>

int main() {
    int array[3][10];
    int numbers[3]; 

    for(int i=0;i<3;i++){
    printf("Enter the number you want multiplication table of:\n");
    scanf("%d",&numbers[i]);
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<10;j++){
            array[i][j]= numbers[i]*(j+1);
        }
    }

    for(int j=0;j<10;j++){
        for(int i=0;i<3;i++){
            printf("%4d",array[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}