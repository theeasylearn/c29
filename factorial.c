// 5! = 5 * 4 * 3 * 2 * 1 = 120
1 * 2 * 3 * 4 * 5

// 3! = 3 * 2 * 1 

// 10! = 10 * 9 * 8 * 7 * ... * 1

// 10 = 10 + 9 + 8 + 7 ... + 1

#include<stdio.h>
void main() {

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);    

    // for (int num; i >= 1; i * num)

    // num = 4
    int fact = 1;
    for (int i = num; i >= 1; i--) {
        fact *= i; // 4 // 12 // 24 // 24
    }
    printf("%d! = %d ", num, fact);
}