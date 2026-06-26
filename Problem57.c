#include <stdio.h>

int custom_strcmp_for(const char *str1, const char *str2) {
    int i;

    for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            return (unsigned char)str1[i] - (unsigned char)str2[i];
        }
    }
    return 0;
}

int main() {
    char s1[] = "Apple";
    char s2[] = "Apricot";
    
    int result = custom_strcmp_for(s1, s2);
    
    if (result == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are different. Return value: %d\n", result);
    }
    
    return 0;
}
