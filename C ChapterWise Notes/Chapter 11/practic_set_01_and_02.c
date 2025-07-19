#include<stdio.h>
#include<stdlib.h>
int main() {
    int *ptr;
    ptr = (int *)malloc(6 *sizeof(int));
    if(ptr == NULL){
        printf("Memory allocation Failed!!");
        return 1;
    }
    for(int i=0;i<6;i++){
    printf("Enter the %d integer:\n",(i+1));
    scanf("%d",&ptr[i]);
    }
    for(int i=0;i<6;i++){
    printf("The %d integer are : %d\n",(i+1),ptr[i]);
    }
    free(ptr);
    return 0;
}