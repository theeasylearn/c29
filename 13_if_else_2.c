//write a program to accept length and width of the box. and findout whether box is square or not.

#include<stdio.h>
void main()
{
    int length,width;
    printf("Enter length");
    scanf("%d",&length);

    printf("Enter width");
    scanf("%d",&width);

    if(length==width) // < > <= >= == !=
    {
        printf("\n box is squere");
    }
    else 
    {
        printf("\n shape is not square");
    }
    printf("\n good bye");
}