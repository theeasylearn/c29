//         *
//       * *
//     * * *
//   * * * *

#include<stdio.h>
void main() {

    int i, j;
    int height;
    printf("Enter height: ");
    scanf("%d", &height);

    for (i = 1; i <= height; i++) { // 1, 2, 3, 4, 5 
        // * spaces 
        for (j = height - 1; j >= i; j--) { // 
            // printf("$ ");
            printf("  ");
        } 
        // * stars
        for (j = 1; j <= i; j++) { // 1, 2, 3, 4, 5
            printf("* ");
        } 
        printf("\n");
    } 
    
    printf("\n---------------------\n");
    
        //     *
        //    * *
        //   * * *
        //  * * * * 

     for (i = 1; i <= height; i++) { // 1, 2, 3, 4, 5 
        // * spaces 
        for (j = height - 1; j >= i; j--) { // 
            printf(" ");
        } 
        // * stars
        for (j = 1; j <= i; j++) { // 1, 2, 3, 4, 5
            printf("* ");
        } 
        printf("\n");
    } 

        //  * * * * 
        //  $* * *
        //  $$* *
        //  $$$*
}