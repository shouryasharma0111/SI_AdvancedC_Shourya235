#include<stdio.h>
int main() {
    int number;
    printf("Enter any Number");
    scanf("%d", &number);
    if(number & 1) {
        printf("Entered number is odd number");
    } else {
        printf("Entered number is even number");
    }
    return 0;
}