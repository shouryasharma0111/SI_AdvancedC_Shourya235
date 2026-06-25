#include <stdio.h>
int main() {
    int arr1[] = {1, 34, 32, 6, 54};
    int arr2[] = {22, 45, 7, 55, 53};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size3 = size1 + size2;
    int merge_array[size3];
    for (int i = 0; i < size1; i++) {
        merge_array[i] = arr1[i];
    }
    for (int j = 0; j < size2; j++) {
        merge_array[size1 + j] = arr2[j];
    }
    printf("Merged array: \n");
    for (int k = 0; k < size3; k++) {
        printf("%d ", merge_array[k]);
    }
    return 0;
}
