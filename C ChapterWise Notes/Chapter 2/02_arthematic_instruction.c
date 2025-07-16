#include<stdio.h>
#include<math.h>

int main() {
    int a = 3,b=2;
   
    printf("The value of a + b is %d\n",a+b);
    printf("The value of a - b is %d\n",a-b);
    printf("The value of a * b is %d\n",a*b);
    printf("The value of a / b is %d\n",a/b);
   

     int z;
    z = a * b; //this is legal.
    //a * b = z; //this is illigal.
    printf("The value of z is %d\n",z);
    printf("When 10 is divided by 4 the remander is %d\n",10%4);
    printf("When -10 is divided by 4 the remander is %d\n",-10%4);
    printf("When 10 is divided by -4 the remander is %d\n",10%-4);

    //No operator is asumed to be present
    //printf("The value of 4 * 5 is %d",(4)(5)); //this would not return the value wrong            
    printf("The value of 4 * 5 is %d\n", 4 * 5 );

    //there is  no operator to perform exponental function
    printf("The value of 4 ^ 5 is %d\n", 4^5 ); // this is wrong

    //to perform power 
    printf("The value of 6 to the power 8 is %.2f\n",pow(6,8));

    printf("The value of 6 + 5 is %d\n",5+6);
    printf("The value of 6 + 0.5 is %f\n",6 + 0.5);
    printf("The value of 5.25 +9.65 is %f\n",5.25 + 9.65);
    printf("The value of 5/2 is %.2f\n",5.0/2);
    printf("The value of 3.0/9 id %f\n",3.0/9 );
   

     return 0;
}