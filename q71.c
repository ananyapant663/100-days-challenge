// Read and print a matrix.

#include <stdio.h>
int main(){
    int i,j,rows,col, matrix[100][100];
    printf("enter the no of rows and columns");
    scanf("%d %d",&rows,&col);

    printf("enter elements of the matrix");
    for(i=0;i<rows;i++){
        for(j=0;j<col;j++){
            scanf(" %d" ,&matrix[i][j]);
        }
    }
    printf("the matirx");
    for(i=0;i<rows;i++){
        for(j=0;j<col;j++){
            printf(" %d",matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
