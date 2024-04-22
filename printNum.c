#include<stdio.h>

void printNum(int num) { // num = 10
    printf("num = %d ", num);
}

void main() {

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    printNum(num);
    printNum(10);
    // main();
} 