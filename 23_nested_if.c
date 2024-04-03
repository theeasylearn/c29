// write a program to findout whether user given year is leap year or not
#include <stdio.h>
void main()
{
    int year,reminder1,reminder2,reminder3;
    printf("Enter year");
    scanf("%d",&year); //2021

    reminder1 = year % 4; //0
    reminder2 = year % 100; //24
    reminder3 = year % 400; 
    printf("reminder1 = %d reminder2 = %d \n",reminder1,reminder2);

    if(reminder1==0 && reminder2!=0) //< > <= >= ==
    {
        printf("it is leap year");
    }
    else 
    {
        if(reminder2 == 0 && reminder3 == 0)
        {
            printf("it is leap year");
        }
        else 
        {
            printf("it is not leap year");
        }
    }
}