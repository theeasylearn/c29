#include<stdio.h>
void main() {

    // * 2, 4, 6, 8, 10, ...

    int ans = 2;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("%.2d ", ans);
            ans += 2;
        }
        printf("\n");
    }
    
    printf("\n");

    ans = 2;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%.2d ", ans);
            ans += 2;
        }
        printf("\n");
    }
}