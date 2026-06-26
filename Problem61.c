#include <stdio.h>

int main() {
    
    char text1[] = "Hello, World! 123";
    char text2[] = "Hello, World! 123";
    for (int i = 0; text1[i] != '\0'; i++) {
        if (text1[i] >= 'a' && text1[i] <= 'z') {
            text1[i] = text1[i] - 32; 
        }
    }
    printf("Uppercase: %s\n", text1); 
    for (int i = 0; text2[i] != '\0'; i++) {
        if (text2[i] >= 'A' && text2[i] <= 'Z') {
            text2[i] = text2[i] + 32; 
        }
    }
    printf("Lowercase: %s\n", text2); 
    return 0;
}
