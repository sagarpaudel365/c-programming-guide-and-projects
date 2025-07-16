#include<stdio.h>

int main() {
    int array[3][10];
    for(int i=0;i<10;i++){
        array[0][i] = 2 * (i+1);
        array[1][i] = 7 * (i+1);
        array[2][i] = 9 * (i+1);
    }
    for(int i=0;i<10;i++){
        for(int j=0; j<3;j++){
        printf("  %4d   ",array[j][i]);
    }
    printf("\n");
}
    return 0;
}