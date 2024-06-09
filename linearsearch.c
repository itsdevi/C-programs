#include <stdio.h>
int linearSearch(int arr[], int n, int x) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i; 
        }
    }
    return -1;
}


void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {17,42,89,49,67,51};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 51;
    
    printf("Array: \n");
    printArray(arr, n);

    int result = linearSearch(arr, n, x);
    if (result != -1) {
        printf("Element %d is present at index %d\n", x, result);
    } else {
        printf("Element %d is not present in the array\n", x);
    }

    return 0;
}
