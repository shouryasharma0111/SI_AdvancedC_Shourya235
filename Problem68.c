#include <stdio.h>

#define SIZE 5

int main() {
    int source[SIZE] = {10, 20, 30, 40, 50};
    int destination[SIZE];
    int *src_ptr = source;      
    int *dest_ptr = destination;
    for (int i = 0; i < SIZE; i++) {
        *dest_ptr = *src_ptr;   
        src_ptr++;             
        dest_ptr++;             
    }

    printf("Destination array: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", destination[i]);
    }
    
    return 0;
}
