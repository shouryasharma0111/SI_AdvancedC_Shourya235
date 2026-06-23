#include<stdio.h>
int main() {
    int number;
    printf("Enter any Number");
    scanf("%d", &number);
    if(number % 2 == 0) {
        printf("Entered number is even number..");
    } else {
        printf("Entered number is odd number..");
    }
    return 0;
}