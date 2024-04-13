#include<stdio.h>
void main() {
    
    // n = 10
    // 10 9 8 7 ... 1 
    // end = 5
    // 10 9 8 7 6 5
    // 10 9 8 7 ... 1 0 -1 -2 -3 ... -10

    int snum;
    printf("Enter a starting number : ");
    scanf("%d", &snum);
    
    int end;
    printf("Enter ending number : ");
    scanf("%d", &end);

    for (int i = snum; i >= end; i--) {
        printf("%d ", i);
    }
}