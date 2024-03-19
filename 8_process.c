// Write a programe to findout area of cylinder
#include <stdio.h>
void main()
{
    float radius = 0;
    float height = 0;
    float pi = 3.141592;
    float answer = 0;
    printf("Enter value of radius ");
    scanf("%f", &radius);
    printf("Enter value of height ");
    scanf("%f", &height);

    answer = (2 * pi * radius * height) + (2 * pi * (radius * radius));
    printf("\nThe value of answer is %f ", answer);
}