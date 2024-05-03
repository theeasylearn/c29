#include<stdio.h>
#include<stdbool.h>

int main() {

    int num = 1;
    printf("size of num = %d \n", sizeof(num));

    char ch = '1';
    printf("size of ch = %d \n", sizeof(ch));

    float myFloat = 1.3;
    printf("size of myFloat = %d \n", sizeof(myFloat));

    bool flag = false;
    printf("size of flag = %d \n", sizeof(flag));

    printf("size of main = %d \n", sizeof(main));

    int arr[100];
    printf("size of arr = %d \n", sizeof(arr));

    // size = sizeof(arr) / dt ;
    // 4 * 5 = 20
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("number of ele in arr = %d \n", size);

    printf("size of arr[0] = %d ", sizeof(arr[0]));

    return 0;
}