#include<stdio.h>
void main()
{
    //create variables
    int a,b,c,result;
    //initilization 
    a=10;
    b=10;
    c=20;

    result = a==b;
    printf("a==b = %d",result);

    result = a!=b;
    printf("\na!=b = %d",result);

    result = a<c;
    printf("\na<c = %d",result);

    result = a>c;
    printf("\na>c = %d",result);

    result = a<=b;
    printf("\na<=b = %d",result);

    result = c<=a;
    printf("\nc<=a = %d",result);

    result = b>=c;
    printf("\nb>=c = %d",result);

    result = b>=b;
    printf("\nb>=b = %d",result);

    result = a==c;
    printf("\na==c = %d",result);

    result = c!=a;
    printf("\nc!=a = %d",result);
}