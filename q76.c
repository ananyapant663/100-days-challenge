//Check if a matrix is symmetric.
#include <stdio.h>
int main(){
    int i,j, r,c, mat[100][100], flag=1;
    printf("enter the no of rows and columns in matrix ");
    scanf("%d %d",&r,&c);

    printf("enter elements of the matrix ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf(" %d" ,&mat[i][j]);
        }
    }

    for(i=0; i<r;i++){
        for(j=0; j<c; j++){
            if(mat[i][j] != mat[j][i]){
                flag = 0;
                break;
            }
        }
    }

    if(flag){
        printf("The matrix is symmetric\n");
    } else {
        printf("The matrix is not symmetric\n");
    }

    return 0;
}
