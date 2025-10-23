/*Multiply two matrices.
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154*/

#include <stdio.h>
int main(){

    int i,j,k, r1,r2,c1,c2, mat1[100][100], mat2[100][100], prod[100][100];
    printf("enter the no of rows and columns in matrix 1 ");
    scanf("%d %d",&r1,&c1);

    printf("enter elements of the matrix 1 ");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf(" %d" ,&mat1[i][j]);
        }
    }

    printf("enter the no of rows and columns in matrix 2 ");
    scanf("%d %d",&r2,&c2);

    if(c1 != r2){
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    printf("enter elements of the matrix 2 ");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf(" %d" ,&mat2[i][j]);
        }
    }
    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            prod[i][j] = 0;
        }
    }
    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            for(k=0; k<c1; k++){
                prod[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("Product of the matrices is:\n");
    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            printf("%d ", prod[i][j]);
        }
        printf("\n");
    }

    return 0;
}