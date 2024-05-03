#include<stdio.h>
int main() {

    int length;
    printf("Enter num of ele : ", length);
    scanf("%d", &length);

    if (length <= 0) {
        printf("Invalid input ");
    } else {
        int arr[length];

        int size = sizeof(arr) / sizeof(arr[0]);

        for (int i = 0; i < size; i++) {
            printf("%d \t %d \n", i, arr[i]);
        }
    }

    
    return 0;
}