#include<stdio.h>
int main()
{
    int eng,mat,sci,avg;
    printf("Enter your percentage in each subject English\n");
    scanf("%d",&eng);
    printf("Enter your percentage in each subject maths\n");
    scanf("%d",&mat);
    printf("Enter your percentage in each subject science\n");
    scanf("%d",&sci);
    avg=(eng+mat+sci)/3;

    if(eng>=100 || eng<=0 || mat>=100 || mat<=0 || sci>=100 || sci<=0)
    {
        printf("Invilid precent input\n");
    }
    else if (eng < 33 || mat < 33 || sci < 33 || avg < 40)
    {
        printf("You failed\n");
    }
    else
    {
        printf("You passed\n");
    }

    return 0;
}