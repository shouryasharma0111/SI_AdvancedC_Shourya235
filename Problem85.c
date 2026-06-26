#include <stdio.h>
#include <stdlib.h>

void processFile(const char *inputFile, const char *outputFile, char key) {
    FILE *in = fopen(inputFile, "rb");
    FILE *out = fopen(outputFile, "wb");

    if (in == NULL || out == NULL) {
        printf("Error opening files.\n");
        return;
    }

       for (int ch = fgetc(in); ch != EOF; ch = fgetc(in)) {
        fputc(ch ^ key, out);
    }

    fclose(in);
    fclose(out);
    printf("Operation successfully completed.\n");
}

int main() {
    char source[] = "input.txt";
    char encrypted[] = "encrypted.dat";
    char decrypted[] = "decrypted.txt";
    char key = 'K';

    printf("Encrypting...\n");
    processFile(source, encrypted, key);

    printf("Decrypting...\n");
    processFile(encrypted, decrypted, key);

    return 0;
}
