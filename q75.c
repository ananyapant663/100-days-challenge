//Add 2 matrices.

#include <stdio.h>
int main(){
    int i,j, r1,r2,c1,c2, mat1[100][100], mat2[100][100], sum[100][100];
    printf("enter the no of rows and columns in matrix 1");
    scanf("%d %d",&r1,&c1);

    printf("enter elements of the matrix 1");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf(" %d" ,&mat1[i][j]);
        }
    }

    printf("enter the no of rows and columns in matrix 2");
    scanf("%d %d",&r2,&c2);
    printf("enter elements of the matrix 1");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf(" %d" ,&mat2[i][j]);
        }
    }
    for(i=0; i<r1;i++){
        for(j=0; j<c1; j++){
            printf("%d",sum[i][j]);
        }
        printf("\n");
    }
    return 0;

}
