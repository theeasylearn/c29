// * key = 2, input != key

#include<stdio.h>
void main() {

    int key = 200;
    int input;
/*
    printf("Enter a number : ");
    scanf("%d", &input); // 5

    printf("Enter a number : ");
    scanf("%d", &input); // 4

    printf("Ente a number : ");
    scanf("%d", &input); // 3

    printf("Enter a number : ");
    scanf("%d", &input); // 2

    printf("You have entered the key. ");
*/

    do {
        printf("Key is between %d and %d \n", key, key - 10);
        printf("Enter a number : ");
        scanf("%d", &input);
    } while (input != key);
    printf("You have entered the key. ");
}