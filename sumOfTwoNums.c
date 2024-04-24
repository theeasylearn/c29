#include<stdio.h>
int printSum(int a, int b, int c) {
    int sum = a + b + c;
    // printf("sum = %d ", sum);

    return sum;
}

void main() {

    int num1, num2, num3;
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);
    printf("Enter third number : ");
    scanf("%d", &num3);

    int store = printSum(num1, num2, num3);
    printf("store = %d \n", store);

    printf("fun = %d ", printSum(num1, num2, num3));
    printf("Program finished ");
}