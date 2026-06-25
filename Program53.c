#include<stdio.h>
int main() {
    int R,C,R1,C1,R2,C2,matrix1[R1][C1],matrix2[R2][C2];
    printf("Enter the value of Rows");
    scanf("%d", &R);
    printf("Enter the value of columns");
    scanf("%d",&C);
    for(int i = 0; i < R1; i++) {
        for(int j = 0; j < C1; j++) {
            printf("First matrix");
            scanf("%d", &matrix1[i][j]);
        }
    }
    for(int i = 0; i < R2;i++) {
        for(int j = 0; j < C2; j++) {
            printf("Second matrix");
            scanf("%d", &matrix2[i][j]);
        }
    }
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            if(matrix1[i][j] == matrix2[i][j]) {
                printf("Matrix re equal");
            } else {
                printf("Matrix are not equal");
            }
        }
    }
    return 0;
}