#include<stdio.h>
/*voide wrong_swap(int a,int b){
    int tent ;
    tent = a;
    a=b;
    b= tent;
}*/

void swap(int *a,int *b){
    int tent ;
    tent = *a;
    *a=*b;
    *b=tent;
}


int main() {
    int x=3,y=4;
   //int z = wrong_swap(x,y);
   printf("before calling swap valur of x = %d and y = %d.\n",x,y);
    swap(&x,&y);
    printf("after calling X:%d and Y:%d\n",x,y );
    return 0;
}