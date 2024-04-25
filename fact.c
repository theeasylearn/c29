#include<stdio.h>

int getFact(int number) {
    // calculate factorial 
    
    int prod = 1;
    for (int i = 1; i <= number; i++) {
        prod = prod * i;
    }
    return prod;
}
int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    int ans = getFact(num);
    printf("Fact = %d ", ans);
    return 0;
}

// 5! = 5 * 4 * 3 * 2 * 1 = 1 * 2 * 3 * 4 * 5
    // 5 = 5 + 4 + 3 + 2 + 1

    // prod = 1
    // sum = sum + i // i = 1 // sum = 0 * 1 = 0
    // i++ // i = 2 
    // sum = sum + i // i = 2 // sum = 1 + 2 = 3 
    // i++ // i = 3 

    // sum = sum + i // i = 3 // sum = 3 + 3 = 6
    // i++; // i = 4

    // sum = sum + i // i = 4 // sum = 6 + 4 = 10
    // i++ // 5 

    // sum = sum + i // i = 5 // sum = 10 + 5 = 15 
    // i++ // 6 