#include <stdio.h>

int main() {
    int num, originalNum, rem;
    long long totalSum = 0;

    printf("Enter an integer to check: ");
    scanf("%d", &num);
    for (int temp=num ; temp > 0; temp /= 10) {
        rem = temp % 10; 
        
        long long currentFact = 1;
        for (int i = 1; i <= rem; i++) {
            currentFact *= i;
        }
        
        totalSum += currentFact;
    }
    if (totalSum == originalNum) {
        printf("%d is a Strong Number.\n", originalNum);
    } else {
        printf("%d is NOT a Strong Number.\n", originalNum);
    }

    return 0;
}
