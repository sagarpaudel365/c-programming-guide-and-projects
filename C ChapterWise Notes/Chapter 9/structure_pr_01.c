#include<stdio.h>
#include<stdio.h>

struct vector
{
    int x;
    int y;
};

int main() {
    
    struct vector v1 , v2;
    v1.x = 45;
    v1.y = 65;
    
    printf("x din is %d and  y dim is %d.\n",v1.x,v1.y);

    v2.x = 48454;
    v2.y = 656644;
    
    printf("x din is %d and  y dim is %d.\n",v2.x,v2.y);
}