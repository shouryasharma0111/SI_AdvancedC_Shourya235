#include <stdio.h>

int compress(char* chars, int charsSize) {
    int write = 0;
    int count = 1;

    for (int read = 0; read < charsSize; read++) {
      
        if (read + 1 == charsSize || chars[read] != chars[read + 1]) {
            chars[write++] = chars[read];
            if (count > 1) {
                int start = write;

           
                for (; count > 0; count /= 10) {
                    chars[write++] = (count % 10) + '0';
                }

             
                for (int end = write - 1; start < end; start++, end--) {
                    char temp = chars[start];
                    chars[start] = chars[end];
                    chars[end] = temp;
                }
            }
            
            
            count = 1;
        } else {
            
            count++;
        }
    }
    return write;
}

int main() {
    char test[] = {'a','a','b','b','c','c','c'};
    int size = sizeof(test) / sizeof(test[0]);
    
    int newSize = compress(test, size);
    
    printf("New length: %d\n", newSize);
    printf("Compressed string: ");
    for (int i = 0; i < newSize; i++) {
        printf("%c", test[i]);
    }
    printf("\n");
    
    return 0;
}
