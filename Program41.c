#include<stdio.h>
int main() {
    int arr[] = {2,3,5,78,8,};
    int size;
    for(int i = 0; i < size - i -1;i++) {
        scanf("%d\n", &arr[i]);
        arr[i] = arr[size - i - 1];
       int temp = arr[i];
       arr[size - i - 1] = temp;
    }
    return 0;
}