#include<stdio.h>
void main()
{
    // create variables
    //%d %c %f are called format specifier or type specifier
    int age;
    float weight;
    char letter;
    printf("learning how to take input from user.");
    printf("\n enter letter");
    scanf("%c",&letter);
    printf("Enter your age");
    scanf("%d",&age);
    printf("enter your weight");
    scanf("%f",&weight);
   
    //display variables
    printf("age = %d weight = %f letter = %c",age,weight,letter);

}