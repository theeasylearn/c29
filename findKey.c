#include<stdio.h>
#include<stdbool.h>

int getIndex(int brr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (brr[i] == key) 
            return i;
        // else 
        //     continue;
    }
    return -1;
}

bool checkKey(int brr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (key == brr[i]) {
            return true;
        } 
    }
    return false;
}

int main() {

    int arr[] = {1, 2, 4, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 4;
    int index = getIndex(arr, size, key);
    if (index < 0) {
        printf("Ele does not exist in array \n");
    } else {
        printf("Element exist at %d index \n", index);
    }

    if (checkKey(arr, size, key)) {
        printf("Element does exist \n");
    } else {
        printf("Element does not exist \n");
    }

    return 0;
}

// {1, 2, 3, 4, 5};
// key = 4;

// is arr[0] == key -> 1 == 4 -> continue 
// is arr[1] == key -> 2 == 4 => continue;
// is arr[2] == key -> 3 == 4 -> continue 
// is arr[3] == key -> 4 == 4 -> return true 
// //  is arr[4] == key -> 5 == 4 -> continue 


// {1, 2, 3, 5};
// key = 4;

// is arr[0] == key -> 1 == 4 -> continue 
// is arr[1] == key -> 2 == 4 => continue;
// is arr[2] == key -> 3 == 4 -> continue 
// is arr[3] == key -> 5 == 4 -> continue 
// return false 