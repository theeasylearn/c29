// is leap -> return true
// not leap -> return false
#include<stdio.h>
#include<stdbool.h>
bool checkLeapYear(int year) {
    // year % 4 = 0
    // 2016, 2020, 2024, 2028, 2032, ...
    // * bool check = false;
    if (year % 4 != 0) {
        // * check = true;
        return false;
    } 
    // * else {
    // *     check = false;
    // * }
    return true;
}
int main() {
    int input;
    printf("Enter a year : ");
    scanf("%d", &input);

    // bool check  = checkLeapYear(input);
    if (checkLeapYear(input)) {
        printf("It is a leap year ");
    } else {
        printf("It is a normal year ");
    }
    return 0;
} 