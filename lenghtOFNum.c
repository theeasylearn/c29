// 101 -> length = 3
// 1923 -> length = 4

// -29312 -> length = 5

#include<stdio.h>
void main() {

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    int length = 0;

    while (num != 0) {
        length++;
        // num = num / 10;
        num /= 10;
        // printf("%d \t %d \n", num, length);
    }
    // printf("%d \n", num);
    printf("length = %d ", length);
}
/*
num = 123 
length = 0

length++; // 1 
num = num / 10; // 12

lenght++; // 2 
num = num / 10; // 1

length++; // 3
num = num / 10; // 0

// length ++; // 4 
// num = num / 10; // 0

// length++; // 5
// num = num / 10; // 0

num = 34244;
length = 0;

length++; // 1 
num = num / 10; // 3424

length++; // 2
num = num / 10; // 342

length++; // 3
num = num / 10; // 34

length++; // 4 
num = num / 10; // 3

length++; // 5 
num = num / 10; // 0
*/