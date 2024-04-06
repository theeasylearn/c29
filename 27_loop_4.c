// write a program to print 10,20,30,40,50,60,70 .... 200


#include <stdio.h>
void main()
{
    int count = 200;

    while(count>=100)
    {
        printf("%d \n", count);
        count--;
    }
}