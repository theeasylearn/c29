/* write a program to display name of the day using given day 
    day = 1 then display monday
    day = 2 then display tuesday
    day = 3 then display wednesday
    day = 7 then display sunday
    otherwise display wrong input
*/
#include<stdio.h>
void main()
{
    int day;
    printf("Enter day");
    scanf("%d",&day);

    if(day==1) //< > <= >= == !=
    {
        printf("monday");
    }
    else if(day==2)
    {
        printf("tuesday");
    }
    else if(day==3)
    {
        printf("wednesday");
    }
    else if(day==4)
    {
        printf("thursday");
    }
    else if(day==5)
    {
        printf("friday");
    }
    else if(day==6)
    {
        printf("saturday");
    }
    else if(day==7)
    {
        printf("sunday");
    }
    else 
    {
        printf("wrong input");
    }
    printf("\n good bye");
}