#include<stdio.h>

int main() {
    FILE *ptr;
    int number = 22;
    ptr = fopen("sijal.txt","w");
    fprintf(ptr,"The number is %d.\n",number);
    fprintf(ptr,"That's the demonastration of fprintf.\n",number);
    fclose(ptr);
    return 0;
}