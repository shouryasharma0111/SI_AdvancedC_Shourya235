#include <stdio.h>

int main() {
    char str[1000];
    int count[256] = {0}; 

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') continue; 
        
        count[(unsigned char)str[i]]++;
    }
    printf("\nCharacter Frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("'%c' : %d\n", i, count[i]);
        }
    }

    return 0;
}
