#include<stdio.h>
float cal(int n){
    return (n * 9.8);
}
int main() {
    int mass;
    printf("Enter mass\n");
    scanf("%d",&mass);
    float force = cal(mass);
    printf("The force exerted would be %.2f N \n",force);
    
    return 0;
}