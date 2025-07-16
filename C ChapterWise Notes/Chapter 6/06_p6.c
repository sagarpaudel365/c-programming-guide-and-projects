#include<stdio.h>
int tenx(int a){
    return a*10;
}
int main() {
    int z=3;
    int y=tenx(z);
    printf("The value of tecx is %d\n",y);
    printf("The original value of z is %d\n",z);

    return 0;
}