#include<stdio.h>
#include<stdlib.h>
int main() {
    int newsize;
    int * ptr;
    ptr = (int *)malloc(4 * sizeof(int));
    if(ptr == NULL){
        printf("Memory allocation Failed!!!");
        return 1;
    }
    for(int i =0;i<4;i++){
        printf("Enrer the %d numbers:\n",(i+1));
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<4;i++){
        printf("%d number : %d\n",(i+1),ptr[i]);
    }
    printf("Enter new size to reallocate:\n");
    scanf("%d",&newsize);
    ptr = realloc(ptr,newsize*sizeof(int));
    if(ptr == NULL){
        printf("Memory reallocationn Failed!!");
        return 2;
    }
    for(int i=0;i<newsize;i++){
        printf("Enter the new no %d : \n",(i+1));
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<newsize;i++){
        printf("The new no %d is %d\n",(i+1),ptr[i]);
    }
    free(ptr);
    return 0;
}