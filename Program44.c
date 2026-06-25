#include<stdio.h>
int main() {
    int arr[] = {2,4,6,67};
    int size, arr[size];
    for(int i = 0; i < arr[size] / arr[0];i++) {
        if(arr[i] > arr[i+1]) {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
        printf("Sorted array = %d\n", arr[i]);
    } 
    return 0;
}