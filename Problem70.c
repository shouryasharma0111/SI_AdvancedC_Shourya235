#include <stdio.h>

void reverseArray(int *arr, int size) {
    int temp;
    for (int *start = arr, *end = arr + size - 1; start < end; start++, end--) {
        temp = *start;
        *start = *end;
        *end = temp;
    }
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, size);

    reverseArray(arr, size);

    printf("Reversed array: ");
    printArray(arr, size);

    return 0;
}
