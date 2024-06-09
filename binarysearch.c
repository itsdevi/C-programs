#include <stdio.h>
int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int m = l + (r - l) / 2;

        if (arr[m] == x) {
            return m;
        }
        if (arr[m] < x) {
            l = m + 1;
        }
        else {
            r = m - 1;
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
    int arr[] = {5, 18, 27, 34, 66,76}; //works only for sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 66;

    printf("Sorted array: \n");
    printArray(arr, n);

    int result = binarySearch(arr, 0, n - 1, x);
    if (result != -1) {
        printf("Element %d is present at index %d\n", x, result);
    } else {
        printf("Element %d is not present in the array\n", x);
    }

    return 0;
}
