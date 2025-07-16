#include<stdio.h>

int main() {
    int q,w,e,r;
    printf("Enter first number\n");
    scanf("%d",&q);
    printf("Enter second number\n");
    scanf("%d",&w);
    printf("Enter third number\n");
    scanf("%d",&e);
    printf("Enter forth number\n");
    scanf("%d",&r);

    if(q>w && q>e && q>r)
    {
        printf("first number is the greatest among four.i.e %d\n",q);
    }
    else if(w>q && w>e && w>r)
    {
        printf("second number is the greatest among four.i.e %d\n",w);
    }
    else if(e>w && e>q && e>r)
    {
        printf("third number is the greatest among four.i.e %d\n",e);
    }
    else if(r>w && r>e &&r>q)
    {
        printf("fourth number is the greatest among four.i.e %d\n",r);
    }
    return 0;
}