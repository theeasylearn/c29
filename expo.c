// base = 2, expo = 4
// 8 * 2 = 16
#include<stdio.h>

int getExpo(int adhar, int ghat) {

    int ans = 1;
    // while (ghat <= 1) {
    //     ans = ans * adhar;
    //     ghat--; 
    // }
    for (int i = 1; i <= ghat; i++) {
        ans = ans * adhar;
        printf("ans = %d, ghat = %d, adhar = %d \n", ans, ghat, adhar);
    }
    return ans;
}

int main() {

    int base, expo;

    printf("Enter value of base : ");
    scanf("%d", &base);
    printf("Enter value of exponant : ");
    scanf("%d", &expo);

    printf("ans = %d", getExpo(base, expo));
    return 0;
}

//      1   *   2
        // ans = ans * adhar; // 2
        // ghat--; // 3

        //         2   *   2
        // ans = ans * adhar; // 4 
        // ghat--; // 2 

        //         4   *   2
        // ans = ans * adhar; // 8
        // ghat--; // 1 

        //         8   *   2
        // ans = ans * adhar // 16
        // ghat--; // 0