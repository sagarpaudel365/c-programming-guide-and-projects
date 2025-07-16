#include<stdio.h>

int main() {
    int number [3][3];
    number[0][0] = 1;
    number[0][1] = 6;
    number[0][2] = 4;
    number[1][0] = 8;
    number[1][1] = 6;
    number[1][2] = 2;
    number[2][0] = 9;
    number[2][1] = 6;
    number[2][2] = 2;

    int rows = sizeof(number)/sizeof(number[0]);
    int coloum = sizeof(number[0])/sizeof(number[0][0]) ;

    printf("%d\n",rows);
    printf("%d\n",coloum);

    for(int i=0; i<rows; i++){
    for (int j=0; j<coloum; j++){
        printf(" %d ",number[i][j]);
    }
    printf("\n");
    }
    return 0;
}