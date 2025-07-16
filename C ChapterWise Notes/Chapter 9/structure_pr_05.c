#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct customer{
    char name[20];
    long long accnum;
    float amount;
}info;

void fun(info c){
  printf("**customer information**\n\n");  
  printf("Account name :%s",c.name);  
  printf("Account number :%d\n",c.accnum);  
  printf("Account amount :%.2f\n",c.amount);  
};
int main() {
    info c1;
    info *ptr = &c1;

    printf("Enter the account holder name:\n");
    fgets(ptr->name,sizeof(ptr->name),stdin);

    printf("Enter the amount customer deposited:\n");
    scanf("%f",&ptr->amount);

    srand(time(0));
    ptr->accnum = rand()%9999999 + 1000000;

    fun(*ptr);
    return 0;
}