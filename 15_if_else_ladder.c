// write a proram to check numeer is big,small or equal
#include <stdio.h>
void main()
{
    int num1;
    int num2;

    printf("enter number 1 : ");
    scanf("%d",&num1);

    printf("enter number 2 : ");
    scanf("%d",&num2);

    if(num1>num2)
    {
        printf("maximum number is : %d",num1);
    }

    else if (num2>num1)
    {
        printf("maximum number is : %d",num2);
    }
    
    else
    {
        printf("both are same...");
    }
}