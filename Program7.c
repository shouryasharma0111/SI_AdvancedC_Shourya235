#include <stdio.h>
#define PI 3.14159
int main() {
    float R, Area, Circumference;
    printf("Enter radius: ");
    scanf("%f", &R);
    Area = PI * R * R;
    Circumference = 2 * PI * R;
    printf("Area = %f\n", Area);
    printf("Circumference = %f\n", Circumference);
    return 0;
}
