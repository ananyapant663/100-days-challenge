// Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>
int main(){ 
    int i,j, r,c, mat[100][100], sum=0;
    printf("enter the no of rows and columns in matrix ");
    scanf("%d %d",&r,&c);

    printf("enter elements of the matrix ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf(" %d" ,&mat[i][j]);
        }
    }

    for(i=0; i<r;i++){
        sum += mat[i][i];
    }

    printf("Sum of main diagonal elements is %d\n", sum);

    return 0;
}