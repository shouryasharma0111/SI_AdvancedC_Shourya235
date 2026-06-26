#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "Hello World 123";
    
    int vowels = 0;
    int consonants = 0;
    int digits = 0;
    int spaces = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); 

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        } 
        else if (ch >= 'a' && ch <= 'z') {
            consonants++; 
        } 
        else if (isdigit(str[i])) {
            digits++; 
        } 
        else if (isspace(str[i])) {
            spaces++; 
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);

    return 0;
}
