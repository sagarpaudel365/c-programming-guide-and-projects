#include<stdio.h>

int main() {
    int num;
    FILE *ptr;
    printf("Enter the number you want multiplication table of :\n");
    scanf("%d",&num);
    ptr= fopen("table.txt","w");
    for(int i=0;i<10;i++){
        fprintf(ptr,"%d x %d = %d\n",num,(i+1),num*(i+1));
    }
    fclose(ptr);
    printf("succesfully generated the table of %d",num);
    return 0;
}