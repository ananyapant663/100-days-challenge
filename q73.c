// Find the sum of each row of a matrix and store it in an array.


#include <stdio.h>
int main(){
    int i,j,rows,col, matrix[100][100],sum[100];
    printf("enter the no of rows and columns");
    scanf("%d %d",&rows,&col);

    printf("enter elements of the matrix");
    for(i=0;i<rows;i++){
        for(j=0;j<col;j++){
            scanf(" %d" ,&matrix[i][j]);
        }
    }

    for(i=0;i<rows;i++){
        sum[i]=0;
        for(j=0;j<col;j++){
            sum[i]+=matrix[i][j];
        }
    }
    printf("rows sum is \n");
    for(i=0;i<rows;i++){
        printf("%d",sum[i]);
    }
    printf("\n");
    return 0;

}