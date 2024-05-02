// * num = 123 
//  length = 3

#include<stdio.h>
#include<stdbool.h>
int add = 0;

int getLength(int num) {
    int length = 0;
    while (num != 0) {
        length++; // calculate length  // length = length + 1
        num /= 10; // remove ld
        // printf("length in fun = %d \n", length);
    }
    return length;
}

int getCube(int ld, int size) {
    // int cube = ld * ld * ld;
    // return cube;

    int prod = 1; 

    for (int i = 1; i <= size; i++) {
        prod *= ld;
    }
    return prod;
    // return ld * ld * ld;
}

void addition(int cube) {
    add += cube;
    // printf("add = %d \n", add);
    // add = 0 + 27 // add = 27
    return;
}

void getLd(int num, int size) {
    
    int ld;
    while (num != 0) {
        ld = num % 10;
        int cube = getCube(ld, size);
        addition(cube);
        num /= 10; // num = num / 10 // remove ld 
        // printf("cube = %d \n", cube);
    }
    return;
}

bool checkSum(int num, int sum) {
    if (num == sum) {
        return true;
    } else {
        return false;
    }
}

int main() {

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    int length = getLength(num);

    getLd(num, length);

    // bool final = checkSum(num, add);
    // printf("num = %d, add = %d, length = %d  \n", num, add, length);
    // printf("final = %d ", final);
    if (checkSum(num, add)) {
        printf("It is an angstrom number ");
    } else {
        printf("It is an normal number ");
    }
    return 0;
}
