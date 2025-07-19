#include<stdio.h>
#include<stdlib.h>
int main() {
    int *ptr;
    ptr = (int *)calloc(6,sizeof(int));
    if(ptr == NULL){
        printf("Memory allocationn failed!!");
        return 1;
    }
    for(int i=0;i<6;i++){
        printf("Enter the values:\n");
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<6;i++){
        printf("The values are: %d\n",ptr[i]);
    }
    free(ptr);
    return 0;
}