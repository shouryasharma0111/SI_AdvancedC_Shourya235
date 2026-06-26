#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort012(int arr[], int n) {
    int low = 0;
    int high = n - 1;
    for (int mid = 0; mid <= high; ) { 
        if (arr[mid] == 0) {
            swap(&arr[low], &arr[mid]);
            low++;
            mid++; 
        } 
        else if (arr[mid] == 1) {
            mid++; 
        } 
        else if (arr[mid] == 2) {
            swap(&arr[mid], &arr[high]);
            high--; 
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {2, 1, 0, 1, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    sort012(arr, n);

    printf("Sorted array:   ");
    printArray(arr, n);

    return 0;
}
