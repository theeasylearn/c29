#include<stdio.h>

int getFact(int number) {
    int fact = 1;
    for (int i = 1; i <= number; i++) {
        // fact = fact * i;
        fact *= i;
    }
    return fact;
}

int getNPr(int n, int r) {
    // int nPr;
    // nPr = getFact(n) / getFact(n - r);
    // return nPr;
    return getFact(n) / getFact(n - r);
}

int main() {

    int n, r;
    printf("Enter value of n : ");
    // scanf("%d-%d", &n, &r);
    scanf("%d", &n);
    printf("Enter value of r : ");
    scanf("%d", &r);

    // printf("n = %d r = %d ", n, r);

    printf("npr = %d ", getNPr(n, r));
    return 0;
}