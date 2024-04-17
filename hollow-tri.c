// *
// * *
// *   *
// *     *
// * * * * *

// * * * * * 
// *       *
// *       *
// *       *
// * * * * * 
#include<stdio.h>
void main() {

    int i, j;
    int side;
    printf("Enter value of side : ");
    scanf("%d", &side);

    if (side >= 0) {
        for (i = 1; i <= side; i++) { // 1 2 3 4 5
            for (j = 1; j <= side; j++) {
                if (i == 1 || i == side || j == 1 || j == side) {
                    printf("* ");
                }
                else {
                    printf("  ");
                }
            }
            printf("\n");
        }
    } 
    else {
        printf("Invalid input ");
    }

    printf("\n----------------------------\n");

    if (side >= 0) {
        for (i = 1; i <= side; i++) { // 1 2 3 4 5
            for (j = 1; j <= side; j++) {
                if (i == 1 || i == side || j == 1 || j == side) {
                    printf("%c ", i + 96);
                }
                else {
                    printf("%d ", j);
                }
            }
            printf("\n");
        }
    } 
    else {
        printf("Invalid input ");
    }

    printf("\n----------------------------\n");

        // *
        // * *
        // *   *
        // *     *
        // * * * * *
    if (side >= 0) {
        for (i = 1; i <= side; i++) { // 1 2 3 4 5
            for (j = 1; j <= i; j++) {
                if (i == 1 || i == side || j == 1 || j == i) {
                    printf("* ");
                }
                else {
                    printf("  ");
                }
            }
            printf("\n");
        }
    } 
    else {
        printf("Invalid input ");
    }
}