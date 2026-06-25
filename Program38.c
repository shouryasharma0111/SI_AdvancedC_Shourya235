#include<stdio.h>
int main() {
    int size, arr[size], i, j;
    int arr[] = {2,54,6,78,45};
    for(int i = 0; i < size / 2; i++) {
        int temp;
        temp = arr[i];
        arr[i] = arr[size - i - 1];
    }
    printf("Reverse of given array =  %d\n");
    return 0;
}