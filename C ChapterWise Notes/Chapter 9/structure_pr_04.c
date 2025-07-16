#include<stdio.h>
typedef struct array{
    float real;
    float ima;
}comp;

void display(comp c){
    printf("%.2f + %.2fi\n",c.real,c.ima);
}

int main() {
    comp fuc[5];
    for(int i=0;i<5;i++){
        printf("Enter the real value of the %d complex number : \n",i+1);
        scanf("%f",&fuc[i].real);
        
        printf("Enter the imagineary value of the %d complex number : \n",i+1);
        scanf("%f",&fuc[i].ima);
    }
        printf("\n Entered complex ");
        for(int i=0;i<5;i++){
            display(fuc[i]);
        }
    
    return 0;
}