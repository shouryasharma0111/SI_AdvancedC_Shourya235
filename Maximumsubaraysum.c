#include <stdio.h>
int main() {
    int size, arr[size];
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements of array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = arr[0];
    int largest_sum = arr[0];
    for (int i = 1; i < size; i++) {
        if (sum + arr[i] > arr[i]) {
        sum = sum + arr[i];
        } else {
        sum = arr[i];
        }
        if (sum > largest_sum) {
            largest_sum = sum;
        }
    }
    printf("Maximum Subarray Sum = %d\n", largest_sum);

    return 0;
}
