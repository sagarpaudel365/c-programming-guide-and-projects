#include<stdio.h>
#include<stdlib.h>
int main() {
    int *ptr;
    ptr= (int *)malloc(5 * sizeof(int));
    if(ptr == NULL){
        printf("Memory allocation Failed!!");
        return 1;
    }
    for(int i=0;i<5;i++){
        printf("Enter  %d of 5 number:\n",(i+1));
        scanf("%d",&ptr[i]);
    }
    ptr = realloc(ptr,10 *sizeof(int));
    if(ptr==NULL){
        printf("Memory reallocation failed!!!");
        return 2;
    }

    for(int i=5;i<10;i++){
        printf("Enter  %d of 10 number:\n",(i+1));
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<10;i++){
        printf("The %d value is : %d\n",(i+1),ptr[i]);
    }
    free(ptr);
    return 0;
}