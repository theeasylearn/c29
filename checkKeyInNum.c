// * check if number containes the value of key or not -> num = 1234, key = 2 => return true
// *                                                      num = 1234, key = 9 => return false

#include<stdio.h>
#include<stdbool.h>

bool checkKey(int num, int key) {
    int ld;
    while (num != 0) {
        ld = num % 10;
        if (ld == key) {
            return true;
        } 
        num /= 10; // num = num / 10
    }
    return false;
}

int main() {

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int key = 2;
    // bool flag = checkKey(num, key);
    // if (flag == true) {
    //     printf("number containes value of key ");
    // } else {
    //     printf("number does not containe value of key ");
    // }

    if (checkKey(num, key)) {
        printf("number containes value of key ");
    } else {
        printf("number does not containe value of key ");
    }

    return 0;
}
// * ---------------------------------------
// num = 1234, key = 2
// ld = 0
// check = false 

// // ld (last digit )
// ld = num % 10 // ld = 4 
// is ld == key -> 4 == 2 -> continue 
// num = num / 10 // 123 

// ld = num % 10 // ld = 3 
// is ld == key -> 3 == 2 -> continue 
// num = num / 10 // 12 

// ld = num % 10 // ld = 2
// is ld == key -> 2 == 2 -> check = true || return true  
// num = num / 10 // num = 1

// ld = num % 10 // ld = 1 
// is ld == key -> 1 == 2 -> continue 
// num = num / 10 // num = 0

// if (check == true) {
//     printf("number containes value key ")
// } else {
//     printf("number does not containe value key ")

// }
//-----------------------------------------

// num = 43234, key = 5
// ld , check = false 

// ld = num % 10 // ld = 4
// is key == ld -> 5 == 4 -> continue 
// num = num / 10 // num = 4323

// ld = num % 10 // ld = 3 
// is key == ld -> 5 == 3 -> continue 
// num /= 10 // num = 432 

// ld = num % 10 // ld = 2 
// is key == ld -> 5 == 2 -> continue 
// num /= 10 // num = 43

// ld = num % 10 // ld = 3 
// is key == ld -> 5 == 3 -> continue 
// num /= 10 // num = 4 

// ld = num % 10 // ld = 4
// is key == ld -> 5 == 4 -> continue 
// num /= 10 // num = 0

// return check 

