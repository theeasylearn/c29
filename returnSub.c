#include<stdio.h>

int sub(int n1, int n2) {
    return n1 - n2;
}

int main() {

    int num1, num2;
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);

    printf("sub = %d ", sub(num1, num2));
    return 0;
}