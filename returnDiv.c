#include<stdio.h>
float div(int a, float b) {
    return a / b;
}

int main() {

    int num1, num2;
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);

    printf("div = %.2f ", div(num1, num2));
    return 0;
}