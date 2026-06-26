#include <stdio.h>

int main() {
    int n1, n2, gcd = 1, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    for (int i = 1; i <= n1 && i <= n2; ++i) {
        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i;
        }
    }
    lcm = (n1 * n2) / gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
}
