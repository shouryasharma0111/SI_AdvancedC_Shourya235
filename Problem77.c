#include <stdio.h>

int trap(int* height, int heightSize) {
    if (heightSize < 3) {
        return 0;
    }

    int leftMax = 0;
    int rightMax = 0;
    int totalWater = 0;

    
    for (int left = 0, right = heightSize - 1; left < right; ) {
        if (height[left] < height[right]) {
            if (height[left] >= leftMax) {
                leftMax = height[left];
            } else {
                totalWater += leftMax - height[left];
            }
            left++; 
             } else {
            if (height[right] >= rightMax) {
                rightMax = height[right];
            } else {
                totalWater += rightMax - height[right];
            }
            right--;
        }
    }

    return totalWater;
}

int main() {
    int height[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n = sizeof(height) / sizeof(height);

    printf("Total water trapped: %d units\n", trap(height, n));
    return 0;
}
