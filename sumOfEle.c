#include<stdio.h>

int getSum(int brr[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += brr[i]; // sum = sum + brr[i]
    }
    return sum;
}

int main() {

    int arr[] = {34, -90, 12, -23, 56, -45, 78, -23, 90, -56, 34, -67, 12, -89, 23, -45, 78, -34, 56, -12, 90, -23, 67, -78, 45, -56, 34, -90, 12, -23, 56, -45, 78, -34, 23, -67, 90, -12, 45, -56, 78, -89, 23, -34, 67, -90, 12, -45, 56, -78, 23, -56, 90, -12, 34, -67, 78, -23, 45, -90, 56, -12, 67, -78, 23, -45, 90, -56, 34, -23, 12, -67, 78, -45, 56, -90, 23, -34, 12, -56, 78, -23, 90, -67, 45, -12, 56, -78, 23};
    int size = sizeof(arr) / sizeof(arr[0]);

    // printf("sum = %d ", getSum(arr, size));
    printf("sum = %d ", getSum(arr, size));
    return 0;
}