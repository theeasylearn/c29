#include<stdio.h>
void main()
{
    int num1,num2,add,sub,mul;
    float div;
    printf("enter value for num1");
    scanf("%d",&num1);

    printf("enter value for num2");
    scanf("%d",&num2);
    
    //process
    add = num1 + num2; //samikaran/expression
    sub = num1 - num2; 
    mul = num1 * num2;
    div = (float) num1 / num2;  //(float) num1 means type casting

    //output
    printf("add = %d, sub = %d , mul = %d, div = %f",add,sub,mul,div);

}