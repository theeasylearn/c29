// write a program to make calculator operations
#include <stdio.h>
void main()
{
    int a;
    int b;
    int choise;

    printf("enter number 1 : ");
    scanf("%d", &a);

    printf("enter number 2 : ");
    scanf("%d", &b);

    printf("\n--------------------------");
    printf("\nenter 1 for addition");
    printf("\nenter 2 for substraction");
    printf("\nenter 3 for multipication");
    printf("\nenter 4 for divison");
    printf("\n--------------------------");

    printf("\nenter your choise : ");
    scanf("%d", &choise);

    if (choise == 1)
    {
        printf("addition : %d", a + b);
    }

    else if (choise == 2)
    {
        printf("substraction : %d", a - b);
    }

    else if (choise == 3)
    {
        printf("multiplication : %d", a * b);
    }

    else if (choise == 4)
    {
        printf("divion : %d", a / b);
    }

    else
    {
        printf("invalid input ! please try again....");
    }
}