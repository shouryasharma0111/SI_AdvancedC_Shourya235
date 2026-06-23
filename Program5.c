#include <stdio.h>
int main() {
    float c, f;
    printf("Enter temperature in Celsius\n");
    scanf("%f", &c);
    f = (c * 9/5) + 32;
    printf("Fahrenheit = %f\n", f);
    printf("Enter temperature in Fahrenheit\n");
    scanf("%f", &f);
    c = (f - 32) * 5/9;
    printf("Celsius = %f\n", c);
    return 0;
}
