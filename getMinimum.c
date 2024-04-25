#include<stdio.h>

int getMinimum(int n1, int n2) {
    int min;
    if (n1 < n2) {
        min = n1;
    } else {
        min = n2;
    }
    return min;
}

int main() {

    int num1, num2;
    printf("Enter number 1 : ");
    scanf("%d", &num1);
    printf("Enter number 2 : ");
    scanf("%d", &num2);

    printf("Min = %d ", getMinimum(num1, num2));
    return 0;
}   