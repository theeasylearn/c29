// sum of first 10 number 
// 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 =
// 55 =

// 3 + 3 = 6 = 1 + 2 + 3

#include<stdio.h>
void main() {
/*
    int num = 0, count = 1;

    printf("%d ", num + count); // 1 

    num++; // 1 
    count++; // 2

    printf("%d ", num + count); // 2

    num++;
    count++; // 2

    printf("%d ", num + count); // 3

    num++;
    count++; // 2
    printf("%d ", num + count); // 4

    num++;
    count++; // 2
    printf("%d ", num + count); // 5 
*/

    int count = 1; 
    int sum = 0;
/*
    sum = sum + count; // s = 1
    count++; // c = 2

    sum = sum + count; // s = 3 
    count++; // c = 3

    sum = sum + count; // s = 6
    count++; // c = 4 

    sum = sum + count; // s = 10
    count++; // c = 5
*/
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    while (count <= num) {
        printf("%d + %d = %d \n", sum, count, sum + count);
        sum = sum + count; // s = 1
        count++; // c = 2
    }
    printf("%d ", sum);    
}