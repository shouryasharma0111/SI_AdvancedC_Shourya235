#include<stdio.h>
int main() {
    int arr1[]= {2,4,5,87,6};
    int arr2[] = {63,2,23,54};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    for(int i = 0; i < size1; i++) {
        for(int j = 0; j < size2; j++) {
            int sum = 0;
            int sum = arr1[i] + arr2[j];
            int average = 0;
            int count = size1 + size2;
            int average = sum / count
            printf("The sum and average value of two array = %d and %d\n", sum , average);
        }
    }
    return 0;
}