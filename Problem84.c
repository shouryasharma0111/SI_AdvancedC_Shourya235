#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORDS 1000
#define MAX_WORD_LEN 50
#define MAX_TEXT_LEN 5000

typedef struct {
    char word[MAX_WORD_LEN];
    int count;
} WordFreq;

int main() {
    WordFreq tracker[MAX_WORDS];
    int unique_word_count = 0;
    
    char text[MAX_TEXT_LEN];
    char current_word[MAX_WORD_LEN];
    int word_index = 0;

    printf("Enter text (Press Enter to analyze):\n");
    if (fgets(text, sizeof(text), stdin) == NULL) {
        return 1;
    }

    int text_length = strlen(text);

        for (int i = 0; i <= text_length; i++) {
        char ch = text[i];
        if (isalnum((unsigned char)ch)) {
            if (word_index < MAX_WORD_LEN - 1) {
                current_word[word_index++] = tolower((unsigned char)ch);
            }
        } 
        
        else if (word_index > 0) {
            current_word[word_index] = '\0'; 
            int found = 0;
            for (int j = 0; j < unique_word_count; j++) {
                if (strcmp(tracker[j].word, current_word) == 0) {
                    tracker[j].count++;
                    found = 1;
                    break;
                }
            }

                if (!found && unique_word_count < MAX_WORDS) {
                strcpy(tracker[unique_word_count].word, current_word);
                tracker[unique_word_count].count = 1;
                unique_word_count++;
            }

            word_index = 0;
        }
    }

    
    printf("\n--- Word Frequency Results ---\n");
    for (int i = 0; i < unique_word_count; i++) {
        printf("%-15s : %d\n", tracker[i].word, tracker[i].count);
    }

    return 0;
}
