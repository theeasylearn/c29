#include <stdio.h>
void main()
{
    int number, first, last;
    printf("Enter number");
    scanf("%d", &number); // 54
    if (number > 9 && number < 100)
    {
        last = number % 10; // modulas operator return reminder
        first = number / 10;
        switch (first)
        {
        case 0:
            printf("zero ");
            break;

        case 1: // if(number == 1)
            printf("one ");
            break;

        case 2:
            printf("two ");
            break;

        case 3:
            printf("three ");
            break;

        case 4:
            printf("four ");
            break;

        case 5:
            printf("five");
            break;

        case 6:
            printf("six ");
            break;

        case 7:
            printf("seven ");
            break;

        case 8:
            printf("eight ");
            break;

        case 9:
            printf("nine ");
            break;

        default:
            printf("\n invalid input");
            break;
        }
        switch (last)
        {
        case 0:
            printf("zero ");
            break;

        case 1: // if(number == 1)
            printf("one ");
            break;

        case 2:
            printf("two ");
            break;

        case 3:
            printf("three ");
            break;

        case 4:
            printf("four ");
            break;

        case 5:
            printf("five");
            break;

        case 6:
            printf("six ");
            break;

        case 7:
            printf("seven ");
            break;

        case 8:
            printf("eight ");
            break;

        case 9:
            printf("nine ");
            break;

        default:
            printf("\n invalid input");
            break;
        }
    }
    else 
    {
        printf("wrong input. input must be between 10 and 99");
    }
}