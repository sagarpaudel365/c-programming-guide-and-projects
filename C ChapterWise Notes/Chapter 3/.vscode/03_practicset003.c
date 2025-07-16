#include<stdio.h>
int main()
{
    int income;
    float tax_amt=0;
    printf("Enter your income\n");
    scanf("%d",&income);

   if(income>=250000 && income<=500000)
   {
    tax_amt=tax_amt+(0.05*(income -250000));
   }
   if(income>=500000 && income<=1000000)
   {
    tax_amt=tax_amt+(0.2*(income - 500000));
   }
   if (income>1000000)
   {
    tax_amt=tax_amt+(0.3*(income -500000));
   }
   printf("Your tax amount on %d is %.2f",income,tax_amt);
   
   

    

    return 0;
}