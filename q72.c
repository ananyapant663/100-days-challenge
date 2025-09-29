// Find the sum of all elements in a matrix.

#include <stdio.h>
int main(){
    int i,j,rows,col, matrix[100][100],sum=0;
    printf("enter the no of rows and columns");
    scanf("%d %d",&rows,&col);

    printf("enter elements of the matrix");
    for(i=0;i<rows;i++){
        for(j=0;j<col;j++){
            scanf(" %d" ,&matrix[i][j]);
        }
    }

    for (i=0;i<rows;i++){
        for(j=0;j<col;j++){
            sum+=matrix[i][j];
        }
    }
    printf("sum is %d",sum);
    return 0;


}
