#include<stdio.h>

int main() {
    int array[5];
    int count = 0 ;
    for(int i=0;i<5;i++){
        printf("Enter the number \n");
        scanf("%d",&array[i]);
    }
    for(int i=0;i<5;i++){
        if(array[i]>0){
            count++;
        }
    }
    printf("Ther are %d positive numbers\n",count);
    return 0;
}