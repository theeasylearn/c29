// base = 2, expo = 4
// 8 * 2 = 16
#include<stdio.h>

float getExpoNegative(int adhar, int ghat) {
    float newAdhar = 1 / (float)adhar;
    float ans = 1.0;
    ghat *= -1; // ghat = ghat * (-1);
    for (int i = 1; i <= ghat; i++) {
        ans = ans * newAdhar;
        // printf("ans = %f, i = %d, newAdhar = %f \n",ans, i, newAdhar);
    }
    // printf("%f ", ans);
    return ans;
}

int getExpo(int adhar, int ghat) {
    int ans = 1;
    while (ghat >= 1) {
        ans = ans * adhar;
        ghat--;
    }
    return ans;
}

int main() {

    int base, expo;
    printf("Enter value of base : ");
    scanf("%d", &base);
    printf("Enter value of expo : ");
    scanf("%d", &expo);

    if (expo >= 0) {
        printf("Ans = %d ", getExpo(base, expo));
    } else {
        printf("Ans = %f ", getExpoNegative(base, expo));
    }

    return 0;
}

// ghat = 4
// adhar = 2
// 2 * 2 * 2 * 2
// ans = 1;

// ans = ans * adhar
// ans = 1 * 2 = 2 
// ghat-- // 3

// ans = ans * adhar
// ans = 2 * 2 = 4 
// ghat--; // 2 

// ans = ans * adhar 
// ans = 4 * 2 = 8
// ghat-- // 1 

// ans = ans * adhar
// ans = 8 * 2 = 16
// ghat-- // 0

// return ans 


// ghat = 3
// adhar = 9 
// ans = 1 

// ans = ans * adhar 
// ans = 1 * 9 = 9
// ghat-- // 2 

// ans = ans * adhar
// ans = 9 * 9 = 81 
// ghat-- // 1 

// ans = ans * adhar
// ans = 81 * 9 = 729 
// ghat-- // 0

// return ans;

// -3 * -3 * -3



