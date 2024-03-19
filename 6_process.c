// Write a programe to findout area of square
#include <stdio.h>
void main()
{
    float side = 0;
    float answer = 0;
    printf("Enter value of side ");
    scanf("%f", &side);

    printf("\nThe value of side is %.2f ", side);

    answer = side * side;
    printf("\nThe value of area of square is %.2f ",answer);
}