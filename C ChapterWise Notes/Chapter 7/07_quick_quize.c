#include<stdio.h>

int main() {
    int a[5]={45,54,87,98,65};
    int *ptr2 = &a[2];
    int *ptr1 = &a[1];
    int *ptr4 = &a[4];
    int *ptr3 = &a[3];
    int *ptr0 = &a[3];


    ptr1++;
    printf("%d\n",ptr1);
    ptr1--;
    printf("%d\n",ptr1);
    int diff = ptr4 -ptr1;

    printf("The value of ptr4 is %d\n",*ptr4);
    printf("The value of ptr1 is %d\n",*ptr1);
    printf("The difference is %d\n",diff);
    
    if(ptr3 = ptr0){
    printf("They point to same integer\n");
    }
    else{
        printf("They do not point to same integer\n");
    }

    

    return 0;
}