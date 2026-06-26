#include <stdio.h>

void findFirstAndLast(int arr[], int n, int target) {
    int first = -1;
    int last = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            if (first == -1) {
                first = i; 
            }
            last = i;    
        }
    }

    printf("First Position: %d\n", first);
    printf("Last Position: %d\n", last);
}

int main() {
    int arr[] = {5, 7, 7, 8, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 8;

    findFirstAndLast(arr, n, target);
    return 0;
}
