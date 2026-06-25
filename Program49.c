#include <stdio.h>
int main() {
    int R1, C1, R2, C2;
    printf("Enter rows and columns of 1st matrix: ");
    scanf("%d %d", &R1, &C1);
    printf("Enter rows and columns of 2nd matrix: ");
    scanf("%d %d", &R2, &C2);
    if (C1 != R2) {
        printf("Multiplication of matrices not possible.\n");
        return 0;
    }
    int matrix1[R1][C1], matrix2[R2][C2], product[R1][C2];
    printf("Enter elements of 1st matrix:\n");
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter elements of 2nd matrix:\n");
    for (int i = 0; i < R2; i++) {
        for (int j = 0; j < C2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            product[i][j] = 0;
        }
    }
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            for (int k = 0; k < C1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}
