#include<stdio.h>
#include<stdbool.h>

bool checkEvenOdd(int number) {
    if (number % 2 == 0) {
        return true;
    } 
    return false;
}

int main() {

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (checkEvenOdd(num)) {
        printf("It is a even number ");
    } else {
        printf("It is a odd number ");
    }
    return 0;
}