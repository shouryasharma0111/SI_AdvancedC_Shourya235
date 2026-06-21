#include<stdio.h>

int main(){
    int i, j;
    int row=5 , col=3, mat[5][3] , transpose[3][5];
    for(int i=0;i<=5;i++)
    {
        for(int j=0;j<=3;j++)
        {
            printf("original matrix %d\n");
            scanf("%d",& mat[i][j]);
        }
    }
    for(int i=0; i<=3;i++)
    {
        for(int j=0; j<=5;j++)
        {
         printf("tranpose matrix %d\n");
         scanf("%d",&transpose[i][j]);
        }
    }
    if(mat[i][j]==transpose[i][j])
    {
        printf("it is symmetric array %d\n",mat[i][j],transpose[i][j]);
    }
    return 0;
}