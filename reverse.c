// * reverse of a number 	
// 123 -> 321 
// 5426 -> 6245
// -9898 -> -8989

#include<stdio.h>
void main() {

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    int ld, rnum = 0;

    while (num != 0) {
        ld = num % 10; // to get last digit
        rnum = rnum * 10 + ld; // to move forward from 0 to 10, 100, 1000, ...
        num = num / 10; // to remove last digit of num

        // printf("ld = %d, rnum = %d, num = %d \n", ld, rnum, num);
    }
    printf("Reverse = %d ", rnum);
}

/*
num = 123 
rnum = 0
ld = 0

ld = num % 10 // 3
rnum = rnum * 10 + ld; // 3 
        0 * 10   + 3 
num = num / 10 // 12 

ld = num % 10 // 2 
rnum = rnum * 10 + ld; // 32
        3  * 10 + 2 
num = num / 10 // 1

ld = num % 10 // 1
rnum = rnum * 10 + ld // 321 
        32 * 10 + 1 
num = num / 10 // 0
*/

/*
num = 54253 
rnum = 0
ld = 0

ld = num % 10 // 3 
rnum = rnum * 10 + ld  // 3 
        0  * 10  + 3 
num = num / 10 // 5425

ld = num % 10 // 5
rnum = rnum * 10 + ld  // 35 
        3 * 10  + 5 
num = num / 10 // 542

ld = num % 10 // 2 
rnum = rnum * 10 + ld;  // 352
        35 * 10  + 2 
num = num / 10 // 54 

ld = num % 10 // 4 
rnum = rnum * 10 + ld ; // 3524 
        352 * 10 + 4
num = num / 10  // 5

ld = num % 10 // 5
rnum = rnum * 10 + ld  // 35245
        3524 * 10 + ld 
num = num / 10 // 0

print(rnum); // 35245
*/