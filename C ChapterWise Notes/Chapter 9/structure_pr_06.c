#include<stdio.h>

typedef struct date{
    int day;
    int month;
    int year;
}dates;

void display(dates d ){
    printf("The date is: %d/%d/%d\n ",d.day,d.month,d.year);
};
int datecmp(dates d1,dates d2){
    if(d1.year>d2.year){
        return 1;
    }
    if(d1.year<d2.year){
        return -1;
    }
    if(d1.month>d2.month){
        return 1;
    }
    if(d1.month<d2.month){
        return -1;
    }
    if(d1.day>d2.day){
        return 1;
    }
    if(d1.day<d2.day){
        return -1;
    }
    else{
        return 0;
    }}
int main() {
    dates d1 = {13,1,2005};
    dates d2 = {27,9,2008};
    display(d1);
    display(d2);
    int a =datecmp(d1,d2);
    printf("Date comparision function returns : %d",a);
    return 0;
}