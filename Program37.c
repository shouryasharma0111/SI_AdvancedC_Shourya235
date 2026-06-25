#include<stdio.h>
int maini() {
    int i, j;
    int size, arr[size];
    int arr[] = {2,4,5,6,67,7};
    for(int i = 0; i < arr[size] / arr[0]; i++) {
        int largest = arr[0];
        int smallest = arr[0];
        for(int j = 0; j < arr[size] / arr[0]; j++) {
            if(largest < arr[i]) {
                largest = arr[i];
                }
                if(smallest > arr[j]) {
                    smallest = arr[j];
            }
        }
        printf("The largest and smallest value = %d and %d\n", largest , smallest);
    }
    return 0;
}