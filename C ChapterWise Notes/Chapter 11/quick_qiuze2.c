#include<stdio.h>
#include<stdlib.h>
int main() {
    int *ptr;
    int n;
    printf("Enter the number of digit you want to enter:\n");
    scanf("%d",&n);
    ptr = (int *)calloc(n,sizeof(int));
    if(ptr==NULL){
        printf("Memory allocation Failed!!");
        return 1;
    }
    for(int i=0;i<n;i++){
        printf("Enter your digits:\n");
        scanf("%d",&ptr[i]);
    }
     for(int i=0;i<n;i++){
        printf("your digits are: %d\n",ptr[i]);
     }
     free(ptr);
    return 0;
}