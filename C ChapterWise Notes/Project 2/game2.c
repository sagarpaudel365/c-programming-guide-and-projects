#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int rockpaperseassor(char you,char com){
if(you == com){
    return 0;
}
else if(you=='p' && com=='r'){
    return 1;
}
else if(you == 'r' && com =='p'){
    return -1;
}
else if(you=='r' && com =='s'){
    return 1;
}
else if(you=='s' && com =='r'){
    return -1;
}
}
int main() {
    char you,com;
    printf("Enter r for Rock,p for for paper,and s for seassor:\n");
    scanf("%c",&you);
    srand(time(0));
    int number =rand()%3 + 1;
   // printf("%d\n",number);
    {
    if(number == 1){
        com ='r';
    }
    else if(number ==2 ){
        com ='p';
    }
    else if(number == 3){
        com ='s';
    }
}
   // printf("computer chose %c\n",com);
    int result = rockpaperseassor(you,com);
   // printf("result :%d\n",result);

    if(result == -1){
        printf("you lost!!!\n");
    }
    else if(result == 0){
        printf("It's a draw\n");
    }
    else if(result == 1){
        printf("You won!!!!!!\n");
    }
    printf("You chose %c and computer chose %c.\n",you,com);
    return 0;
}