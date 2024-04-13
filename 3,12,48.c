// 3, 12, 48, ...

#include<stdio.h>
void main() {

    int num = 100;
/*
    printf("%d ", num); // 3 

    num *= 4; // num = num * 4; // 12 
    printf("%d ", num); // 12 

    num *= 4; // num = num * 4; // 48
    printf("%d ", num); // 48

    num *= 4; // num = num * 4; // 192
    printf("%d ", num); // 192 
*/

    for (int count = 1; count <= 10; count++) {
        printf("%d ", num);
        num *= 4; // num = num * 4 
                //    num = 3  * 4 = 12 // num = 12
                //    num = 12 * 4
    }
}   