#include<stdio.h>

int main() {
    int mark[5];
    

    for(int a=0; a<5 ;a++){
        printf("Enter any value of for student %d\n",a+1);
        scanf("%d",&mark[a]);
    }
    for(int a=0; a<5; a++){
        printf("The mark of student %d is %d\n",a+1, mark[a]);
    }
    return 0;
}