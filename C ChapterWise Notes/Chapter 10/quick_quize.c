#include<stdio.h>

int main() {
    FILE *ptr;
    int num,num2;
    ptr =fopen("jerry.txt","r");
    if(ptr == NULL){
        printf("THE FILE DOESNOT EXIST.\n");
    }else{
    fscanf(ptr,"%d",&num);
    fscanf(ptr,"%d",&num2);
    fclose(ptr);
    printf("The number in the file is: %d\n",num);
    printf("The second number in the file is: %d\n",num2);
    return 0;
}
}