#include<stdio.h>
#include<stdlib.h>
int main() {
    int *ptr;
    ptr = (int *)calloc(5,sizeof(int));
    if(ptr==NULL){
        printf("Memory allocation failed!!");
        return 1;
    }
    for(int i=0;i<5;i++){
        printf("Enter the value of number %d:\n",(i+1));
        scanf("%d",&ptr[i]);
    }
        for(int i=0;i<5;i++){
        printf("The value of number %d is : %d\n",(i+1),ptr[i]);
        }
        int *ptr2 = realloc(ptr,10*sizeof(int));
        if(ptr2==NULL){
        printf("Memory reallocation failed!!");
        free(ptr);
        return 2;
    }
    ptr=ptr2;
    for(int i=5;i<10;i++){
        printf("Enter the value of number %d:\n",(i+1));
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<10;i++){
        printf("The value of number %d is %d\n",(i+1),ptr[i]);
    }
    free(ptr);
    return 0;
}