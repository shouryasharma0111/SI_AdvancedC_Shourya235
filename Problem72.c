#include <stdio.h>

int main() {
    int rows, cols;
    int i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int mat1[rows][cols];
    int mat2[rows][cols];
    int sum[rows][cols];

       printf("\nEnter elements of Matrix 1:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
                        scanf("%d", (*(mat1 + i) + j));
        }
    }
    printf("\nEnter elements of Matrix 2:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", (*(mat2 + i) + j));
        }
    }
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            
            *(*(sum + i) + j) = *(*(mat1 + i) + j) + *(*(mat2 + i) + j);
        }
    }
    printf("\nResultant Sum Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", *(*(sum + i) + j));
        }
        printf("\n");
    }

    return 0;
}
