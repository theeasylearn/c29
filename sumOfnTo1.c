#include<stdio.h>
void main() {
    
    // 5 -> 5 + 4 + 3 + 2 + 1

    int sum = 0; 

    int num = 15;
    printf("Enter a number : ");
    scanf("%d", &num);
/*
    sum += num;
    sum = sum + num; // 0 + 5 // 5 
    num--; // 4 

    sum = sum + num; // 5 + 4 // 9
    num--; // 3 

    sum = sum + num; // 9 + 3 // 12
    num--; // 2

    sum = sum + num; // 12 + 2 // 14
    num--; // 1

    sum = sum + num;  // 14 + 1 // 15
    num--; // 0

    sum = sum + num; // 15 + 0  // 15 
    num--; // -1

    sum = sum + num; // 15 + (-1) // 14
*/

    for (int i = num; i >= 1; i--) {
        sum += i;   
    }
    printf("%d ", sum);

}


