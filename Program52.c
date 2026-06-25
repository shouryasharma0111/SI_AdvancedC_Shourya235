#include <stdio.h>
int main() {
    int R, C;
    printf("Enter the number of rows in matrix: ");
    scanf("%d", &R);
    printf("Enter the number of columns in matrix: ");
    scanf("%d", &C);
    int matrix[R][C];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int sum = 0;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (i == j || i + j == R - 1) {  // main diagonal OR secondary diagonal
                sum = sum + matrix[i][j];
            }
        }
    }
    printf("Sum of Diagonal Elements = %d\n", sum);
    return 0;
}
