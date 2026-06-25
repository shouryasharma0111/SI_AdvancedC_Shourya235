#include<stdio.h>
int main() {
    int size,arr[size], target;
    printf("Enter the number of elements in array is %d and %d\n",size , target);
    scanf("%d %d\n", &size,&target);
    for(int i = 0; i < arr[size] / arr[0] ; i++) {
        if(arr[i] == target) {
            printf("Value of found element at that position = %d\n", arr[i]);
        } else {
            printf("Element not found = %d\n");
        }
    }
    return 0;
}