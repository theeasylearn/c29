// 4 9 16 25 36 .... 10000

#include<stdio.h>
void main() {

    int prod = 1;

    int count = 1;

/*

    prod = count * count; // prod = 4
    printf("%d ", prod);

    count++; // count = 3 
    prod = count * count; // prod = 9
    printf("%d ", prod); // 9

    count++; // count = 4
    prod = count * count; // 16 
    printf("%d ", prod); // 16 

    count++; // 5
    prod = count * count; // 25
    printf("%d ", prod); // 25
*/
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (count <= num) {
        prod = count * count; // prod = 4
        printf("%d * %d = %d \n",count, count, prod);
        count++; // count = 3 
    }
}