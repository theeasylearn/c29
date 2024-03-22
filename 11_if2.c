//write a program to accept day of week from user. if day of week is 7 display message happy sunday.
#include<stdio.h>
void main()
{
    int day;
    printf("Enter day of week (1 to 7)");
    scanf("%d",&day);
    if(day==7) // < > <= >= != ==
    {
        printf("Happy sunday....");
    }
    printf("\n good bye....");
}