#include<stdio.h>
int main() {
    int R,C,matrix[R][C],transpose[R][C];
    int i,j;
    for(int i = 0;i < R; i++) {
        for(int j = 0; j < C; j++) {
            printf("Enter the elements of matrix");
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i = 0; i < C; i++) {
        for(int j = 0;  j < R; j++) {
            printf("Enter the elements of matrix");
            scanf("%d", &transpose[i][j]);
        }
    }
    if(matrix[i][j] == transpose[i][j]) {
        printf("It is not the symmetric matrix");
    }
    return 0;
}