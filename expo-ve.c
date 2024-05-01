// adhar = 2
// ghat = -5 
// ans = (1 / 2) * (1 / 2) * (1 / 2) * (1 / 2) * (1 / 2)
// ans = 0.25 * 0.25 = 0.0625
// https://d138zd1ktt9iqe.cloudfront.net/media/seo_landing_files/negative-exponent-rules-1625814769.png

#include<stdio.h>

float getExpo(int adhar, int ghat) {
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

int main() {

    int base, expo;
    printf("Enter value of base : ");
    scanf("%d", &base);
    printf("Enter value of expo : ");
    scanf("%d", &expo);

    // printf("%d %d \n", base, expo);

    printf("ans = %.5f ", getExpo(base, expo));

    return 0;
}