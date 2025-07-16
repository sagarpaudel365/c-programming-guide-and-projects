#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name [10];
};

int main() {
    struct employee netflix[100];

    netflix[0].code = 000;
    netflix[0].salary = 8670.7875;
    strcpy(netflix[0].name,"sijal");

    netflix[1].code = 001;
    netflix[1].salary = 4000.5;
    strcpy(netflix[1].name,"sagar");

    netflix[2].code = 002;
    netflix[2].salary = 6847.575;
    strcpy(netflix[2].name,"sam");

    netflix[3].code = 003;
    netflix[3].salary = 7840.5;
    strcpy(netflix[3].name,"peater");

    for(int i=0;i<4;i++){
        printf("employee %d of netflix\n",i+1);
        printf("employee code : %d\n",netflix[i].code);
        printf("employee salary : %.3f\n",netflix[i].salary);
        printf("employee name : %s\n",netflix[i].name);
        
        printf("\n");

    }
    return 0;
}