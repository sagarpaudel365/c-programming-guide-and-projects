#include<stdio.h>
#include<stdlib.h>
int main() {
    int a =7;
    int *ptr;
    ptr = (int *)malloc(10 * sizeof(int));
    if(ptr == NULL){
        printf("Memory allocation failed");
        return 1;
    }
    
    for(int i =0;i<10;i++){
        ptr[i]=(i+1)*a;
        printf("%d x %d = %d\n",7,(i+1),ptr[i]);
    }
    int *tpr = realloc(ptr,15 * sizeof(int));
    if(tpr == NULL){
        printf("Memory reallocation failed!!");
        free(ptr);
        return 2;
    }
    ptr = tpr;
    for(int i=10;i<15;i++){
        ptr[i]=(i+1)*a;
        printf("%d x %d = %d\n",7,(i+1),ptr[i]);
    } 
    free(ptr);
    return 0;
}