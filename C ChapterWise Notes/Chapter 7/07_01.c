#include<stdio.h>

int main() {
    int arra[10];
    int *ptr = arra;
    ptr = ptr +2;
    if(ptr==&arra[2]){
        printf("YES,the point in same location.\n");
    }
    else{
        printf("NO,they dont point to the same location\n");
    }
    return 0;
}