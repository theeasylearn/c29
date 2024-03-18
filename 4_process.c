#include<stdio.h>
void main()
{
    float hours,minutes;

    //input
    printf("enter hours");
    scanf("%f",&hours);
    //process
    minutes = hours * 60;

    //output
    printf(" minutes = %7.2f",minutes);
}