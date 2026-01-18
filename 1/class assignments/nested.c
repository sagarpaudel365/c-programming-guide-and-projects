#include<stdio.h>
int main(){
int i,j;
for (i = 5; i <= 6; i++)
{
    printf("\n\t");
    for (j=1; j<=10; j++)
    {
        printf("\n\t %d x %d = %d",i,j,i*j);
    }
}
return 0;
}