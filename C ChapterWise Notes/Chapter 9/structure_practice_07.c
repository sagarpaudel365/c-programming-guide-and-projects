#include<stdio.h>
typedef struct timestampdate{
    int day;
    int month;
    int year;
} date;
typedef struct timestamptime{
    int hour;
    int minute;
    int second;
} time;
void display(date d,time t){
    printf("The purchase date was %d/%d/%d at time %d:%d:%d\n",d.day,d.month,d.year,t.hour,t.minute,t.second);
};
int main() {
    date d1={24,06,2019};
    time t1={02,51,37};
    display(d1,t1);
    return 0;
}