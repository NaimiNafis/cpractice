//Binary Search (the array should already be sorted)

#include <stdio.h>

int binary_search(int a[], int n, int data){

    int low = 0;
    int up = n - 1;
    int mid;

    while (low <= up) {
        mid = (low + up)/2;
        if ( data == a[mid]) {
            return mid;
        }
        else if ( data < a[mid]) {
            up = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1;
}

int main(){

    int a[] = {5, 9, 17, 23, 25, 45, 59, 63, 71, 89};
    int arraySize = sizeof(a)/sizeof(a[0]);
    int data = 59;
    int index = binary_search(a, arraySize, data);

    if (index != -1) {
        printf("Element found at index: %d", index);
    } else {
        printf("Element not found.");
    }

    return 0;
}