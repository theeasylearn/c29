#include <stdio.h>
void main()
{
    int number1;
    int number2;
    int choise;

    printf("enter number1 : ");
    scanf("%d",&number1);

    printf("enter number2 : ");
    scanf("%d",&number2);

    printf("\n--------------------------");
    printf("\nenter 1 for addition");
    printf("\nenter 2 for substraction");
    printf("\nenter 3 for multipication");
    printf("\nenter 4 for divison");
    printf("\n--------------------------");

    printf("\nenter your choise : ");
    scanf("%d",&choise);

    switch(choise)
    {
        case 1:
            printf("addition : %d",number1+number2);
            break;

        case 2:
            printf("substraction : %d",number1-number2);
            break;

        case 3:
            printf("multiplication : %d",number1*number2);
            break;

        case 4:
            printf("division : %d",number1/number2);
            break;

        default:
            printf("Invalid Input....");
            break;
    }

}