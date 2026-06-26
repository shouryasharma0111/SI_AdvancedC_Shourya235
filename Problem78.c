#include <stdio.h>

void compressString(const char* src, char* dest) {
    int write = 0;

    
    for (int read = 0; src[read] != '\0'; ) {
        char current_char = src[read];
        int count = 0;

    
        for (; src[read] == current_char; read++) {
            count++;
        }

    
        dest[write++] = current_char;

            if (count >= 100) {
            dest[write++] = (count / 100) + '0';
            dest[write++] = ((count / 10) % 10) + '0';
            dest[write++] = (count % 10) + '0';
        } else if (count >= 10) {
            dest[write++] = (count / 10) + '0';
            dest[write++] = (count % 10) + '0';
        } else {
            dest[write++] = count + '0';
        }
    }
    
    dest[write] = '\0'; 
}

int main() {
    char input[] = "aaabbbcccccde";
    char compressed[50]; 

    compressString(input, compressed);

    printf("Original: %s\n", input);
    printf("Compressed: %s\n", compressed);
    return 0;
}
