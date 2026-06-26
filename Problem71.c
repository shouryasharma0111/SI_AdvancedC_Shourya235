#include <stdio.h>

int main() {
    int arr[] = {12, 45, 78, 23, 56, 89};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23; 
        int *ptr;
    int found = -1;
    for (ptr = arr; ptr < (arr + size); ptr++) {
        if (*ptr == target) {

            found = ptr - arr; 
            break; 
        }
    }

    if (found != -1) {
        printf("Element %d found at index %d.\n", target, found);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
