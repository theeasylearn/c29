// * num = 123 -> 1 + 2 + 3 -> 6 
// * num = 324 -> 3 + 2 + 4 -> 9
// * num = 3249 -> 3 + 2 + 4 + 9 = 9 + 4 + 2 + 3 -> 18

#include<stdio.h>
void main() {

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    int sum = 0;

}
// num = 5349; // 5349 / 100 = 5.349
// printf("%d ", num % 1000);


sum = 0
num = 123 

sum = sum + num % 10; // 3 
        0 + 3
num = num / 10; // 12

sum = sum + num % 10; // 5 
        3 + 2 
num = num / 10; // num = 1 

sum = sum + num % 10; // 6
        5 + 1
num = num / 10; // 0

sum = 0
num = 94342;

sum = sum + num % 10; // 2 
        0 + 2 
num = num / 10; // 9434

sum = sum + num % 10; // 6
        2 + 4
num = num / 10; // 943

sum = sum + num % 10; // 9
        6 + 3
num = num / 10; // 94

sum = sum + num % 10; // 13
        9 + 4
num = num / 10; // 9

sum = sum + num % 10; // 22 
        13 + 9
num = num / 10; // 0

print(sum); // * 22 