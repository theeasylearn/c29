#include<stdio.h>
void main() {

    int row, col;
    printf("Enter number of row : ");
    // scanf("%d \n %d" ,&row, &col);
    scanf("%d", &row);

    printf("Enter number of columns : ");
    scanf("%d", &col);

    for (int i = -10; i <= row; i++) {
        for (int j = 1; j <= col; j++) {
            printf("* ");
        }
        printf("\n");
    }

}