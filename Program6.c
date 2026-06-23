#include <stdio.h>
#include <math.h>
int main() {
    int P, R, T, SI, CI;
    printf("Enter Principal, Rate, Time\n");
    scanf("%d %d %d", &P, &R, &T);
    SI = (P * R * T) / 100;
    CI = P * pow((1 + R/100), T) - P;
    printf("Simple Interest = %d\n", SI);
    printf("Compound Interest = %d\n", CI);
    return 0;
}
