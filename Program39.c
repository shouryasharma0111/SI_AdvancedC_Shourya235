#include<stdio.h>
int main() {
    int i, j, size, arr[size];
    for(int i = 0; i < size; i++) {
        for(int j = i+1 ; j < size; j++) {
            if(arr[i] = arr[j]) {
                printf("%d\n",arr[i]);
                break;
            }
        }
    }
    return 0;
}