#include<stdio.h>
#include<string.h>
int main() {
    char *st ="Hello";
    char st2[45] = "Sijal";
    strcat(st2 ,st);
    printf("Now the st2 is %s",st2);
    return 0;
}