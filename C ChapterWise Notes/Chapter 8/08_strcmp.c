#include<stdio.h>
#include<string.h>
int main() {
    char st1[45] = "ok2";
    char *st2 ="ok1";
    int val = strcmp(st1,st2);
    printf("Now the val is %d",val);
    return 0;
}