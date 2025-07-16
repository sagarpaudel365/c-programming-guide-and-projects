#include<stdio.h>

int main() {
    int i;
    int j;
    printf("Enter the rows and colomns for your table:\n");
    scanf("%d%d",&i,&j);



    int arra[i][j];

    for(int a=0; a<i; a++){
       for(int b=0; b<j; b++){
            printf("Enter the element of table[%d][%d]:\n",a,b);
            scanf("%d",&arra[a][b]);
    }
}

for(int a=0;a<i;a++){
    for(int b=0;b<j;b++){
    printf("%d ",arra[a][b]);
    }
    printf("\n");
}

    return 0;
}