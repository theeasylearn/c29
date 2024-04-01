// write a program that print days with given input using switch case

#include <stdio.h>
void main()
{
    int day;
    printf("\n--------- days -----------");
    printf("\n1 - sunday");
    printf("\n2 - monday");
    printf("\n3 - tuesday");
    printf("\n4 - wednesday");
    printf("\n5 - thursday");
    printf("\n6 - friday");
    printf("\n7 - saturday");
    printf("\n--------------------------");

    printf("\nenter number : ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("day : sunday");
        break;

    case 2:
        printf("day : moday");
        break;

    case 3:
        printf("day : tuesday");
        break;

    case 4:
        printf("day : wednesday");
        break;

    case 5:
        printf("day : thursday");
        break;

    case 6:
        printf("day : friday");
        break;

    case 7:
        printf("day : saturday");
        break;

    default:
        printf("invalid input");
        break;
    }
}