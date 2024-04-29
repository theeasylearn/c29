// * calculate square of a number 
// num = 2, sq = 2 * 2 
// num = 5, sq = 5 * 5 = 25 

#include<stdio.h>

float getSqaure(float number) { // number = 2

//              2   *   2
    // number = number * number; // num *= num // number = 4
    // return number; // return 4 

    return number * number;
}

int main() {
    float num;
    printf("Enter a number : ");
    scanf("%f", &num);

    printf("%.2f ^ 2 = %.2f ", num, getSqaure(num));
    return 0;
}

// -6 * -6 = 36