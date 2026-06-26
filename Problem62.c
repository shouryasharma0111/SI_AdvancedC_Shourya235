#include <stdio.h>
#include <string.h>

int main() {
    char str[5][50] = {
        "Banana",
        "Apple",
        "Cherry",
        "Dragonfruit",
        "Avocado"
    };
    
    int count = 5;
    char temp[50]; 

    printf("Original list:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", str[i]);
    }
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++){
            if (strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("\nSorted list:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}
