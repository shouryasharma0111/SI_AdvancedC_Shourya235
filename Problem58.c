#include <stdio.h>
#include <string.h>

void reverseString(char *str);
int main() {
    char myString[] = "Programming";
    
    printf("Original: %s\n", myString);
    
    reverseString(myString);
    
    printf("Reversed: %s\n", myString);
    
    return 0;
}

void reverseString(char *str) {
    if (str == NULL) return;

    int len = strlen(str);
    char temp;
    for (int left = 0, right = len - 1; left < right; left++, right--) {
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;
    }
}
