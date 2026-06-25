#include<stdio.h>
int main() {
    int R,C,matrix1[R][C],matrix2[R][C],i,j;
    int sum[i][j];
    printf("Enter the number of rows");
    scanf("%d",&R);
    printf("Enter the number of column");
    scanf("%d", &C);
    for(int i = 0;i < R; i++) {
        for(int j = 0; j < C; j++) {
            printf("First matrix %d\n");
            scanf("%d",&matrix1[i][j]);
        }
    }
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            printf("Second matrix %d\n");
            scanf("%d", &matrix2[i][j]);
        }
    }
    sum[i][j] = 0;
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("Sum of two matrix is %d\n", sum[i][j]);
        }
    }
    return 0;
}