#include<stdio.h>
int main() {
    int a =2, b =4;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swappig of two numbers is , a = %d\n and b = %d\n", a , b);
    return 0;
}