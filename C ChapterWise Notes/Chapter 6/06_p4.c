#include<stdio.h>
void sumandavg(int a,int b,int *sum,float *avg){
    *sum = a + b;
    *avg = (float)*sum/2.0;
}
int main() {
    int x = 3, y =7, sum ;
    float avg;
    sumandavg(x,y,&sum,&avg);
    printf("sum =%d\n",sum);
    printf("avg =%.2f\n",avg);

    return 0;
}