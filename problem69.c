#include <stdio.h>
#include <stdlib.h>
void swapArrayPointers(int **ptr1, int **ptr2) {
    int *temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int size = 3;
    int *arr1 = (int *)malloc(size * sizeof(int));
    int *arr2 = (int *)malloc(size * sizeof(int));
    arr1[0] = 1; arr1[1] = 2; arr1[2] = 3;
    arr2[0] = 7; arr2[1] = 8; arr2[2] = 9;

    printf("Before Swap:\n");
    printf("arr1[0]: %d, arr2[0]: %d\n", arr1[0], arr2[0]);

    swapArrayPointers(&arr1, &arr2);

    printf("\nAfter Swap (Addresses changed):\n");
    printf("arr1[0]: %d, arr2[0]: %d\n", arr1[0], arr2[0]);

    free(arr1);
    free(arr2);
    return 0;
}
