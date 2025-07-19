#include<stdio.h>
#include<stdlib.h>
int main() {
    int y;
    int *ptr;

    printf("Enter how many heap memory storage you want to create:\n");
    scanf("%d",&y);

    ptr = (int *)malloc( y* sizeof(int));
    if(ptr==NULL){
        printf("Memory allocation Failed!!");
        return 1;
    }

    for(int i=0;i<y;i++){
        printf("Enter the number :\n");
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<y;i++){
        printf("The number are :%d\n",ptr[i]);
    }
    free(ptr);
    return 0;
}