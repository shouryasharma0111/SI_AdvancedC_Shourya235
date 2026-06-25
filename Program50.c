#include<stdio.h>
int main() {
    int R, C, matrix[R][C], transpose[R][C];
    int i, j;
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            printf("Enter the elements of matrix[R][C]");
            scanf("%d\n", &matrix[i][j]);
        }
    }
    for(int i = 0; i < C; i++) {
        for(int j = 0; j < R; j++) {
            printf("Enter the elements of %d");
            scanf("%d\n", &transpose[i][j]);
        }
    }
    printf("Transpose of matrix = %d\n", transpose[i][j]);
    return 0;
}