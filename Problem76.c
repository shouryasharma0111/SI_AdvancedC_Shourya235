#include <stdio.h>


int findCandidate(int arr[], int size) {
    int majorityIdx = 0;
    int count = 1;
    
    for (int i = 1; i < size; i++) {
        if (arr[majorityIdx] == arr[i]) {
            count++;
        } else {
            count--;
        }
        if (count == 0) {
            majorityIdx = i;
            count = 1;
        }
    }
    return arr[majorityIdx];
}


int isMajority(int arr[], int size, int cand) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == cand) {
            count++;
        }
    }
    return (count > size / 2);
}
void printMajority(int arr[], int size) {
    int cand = findCandidate(arr, size);
    
    if (isMajority(arr, size, cand)) {
        printf("Majority Element: %d\n", cand);
    } else {
        printf("No Majority Element exists.\n");
    }
}

int main() {
    int arr[] = {2, 2, 1, 1, 2, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printMajority(arr, size);
    
    return 0;
}
