#include <stdio.h>

void remove_non_alphabets(char *str) {
    int write_index = 0;
    for (int read_index = 0; str[read_index] != '\0'; read_index++) {
    
        if ((str[read_index] >= 'a' && str[read_index] <= 'z') || 
            (str[read_index] >= 'A' && str[read_index] <= 'Z')) {
            
            str[write_index] = str[read_index];
            write_index++;
        }
    }
    str[write_index] = '\0';
}

int main() {
    char str[] = "Pr0gr@m-m1ng!_2026";

    printf("Original: %s\n", str);
    
    remove_non_alphabets(str);
    
    printf("Result:   %s\n", str);

    return 0;
}
