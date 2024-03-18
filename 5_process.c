#include<stdio.h>
void main()
{
    int minutes;
    float hours;
   
    //input 
    printf("Enter minutes");
    scanf("%d",&minutes);

    //process
    hours = minutes / 60.0;

    //output 
    printf("hours = %7.2f",hours);

}