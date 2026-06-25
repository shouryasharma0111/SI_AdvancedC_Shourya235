#include<stdio.h>
int main() {
    int size, arr[size], minimum_value, i;
    int arr[] = {2,7,56,34};
    minimum_value = arr[0];
    for(int i = 0; i < arr[size] / arr[0]; i++) {
        if(arr[i] = minimum_value) {
            int temp = arr[i];
            arr[i] = minimum_value;
            minimum_value = temp;
        }
    }
    printf("Sorted array = %d\n",arr[i]);
    return 0;
}