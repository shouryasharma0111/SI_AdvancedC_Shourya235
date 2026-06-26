#include <stdio.h>
#include <stdbool.h>

#define N 4 


int findCelebrity(int mat[N][N]) {
    int candidate = 0;

        for (int i = 1; i < N; i++) {
        
        if (mat[candidate][i] == 1) {
            candidate = i;
        }
    }

    
    for (int i = 0; i < N; i++) {
        if (i != candidate) {
            
            if (mat[candidate][i] == 1 || mat[i][candidate] == 0) {
                return -1;            }
        }
    }

    return candidate; 
}

int main() {
    
    int mat[N][N] = {
        {0, 0, 1, 0},
        {1, 0, 1, 1},
        {0, 0, 0, 0},
        {0, 1, 1, 0}
    };

    int result = findCelebrity(mat);

    if (result == -1) {
        printf("No celebrity found.\n");
    } else {
        printf("Celebrity ID: %d\n", result);
    }

    return 0;
}
