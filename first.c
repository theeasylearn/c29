#include<stdio.h>
int main() {

    int arr1[20];

    // arr1[0] = 10;
    // arr1[1] = 2;
    // arr1[2] = 3;
    // arr1[3] = 4;
    // arr1[4] = 5;

    // printf("%d \n", arr1[0]);
    // printf("%d \n", arr1[1]);
    // printf("%d \n", arr1[2]);
    // printf("%d \n", arr1[3]);
    // printf("%d \n", arr1[4]);
    // printf("%d \n", arr1[5]); // garbedge value 
    // printf("%d \n", arr1[6]); // garbedge value 

    int size = sizeof(arr1) / sizeof(arr1[0]);
    for (int i = 0; i < size; i++) { // accessing every element
        // arr1[i] = i * 10;
        printf("Enter %dth elemet : ", i + 1);
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", arr1[i]);
    }
    return 0;
}