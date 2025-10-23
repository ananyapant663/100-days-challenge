/*Perform diagonal traversal of a matrix.
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9
*/

#include <stdio.h>
int main(){
    int i,j, r,c, mat[100][100];
    printf("enter the no of rows and columns in matrix ");
    scanf("%d %d",&r,&c);

    printf("enter elements of the matrix ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf(" %d" ,&mat[i][j]);
        }
    }

    for(int d=0; d<r+c-1; d++){
        if(d%2==0){
            for(i=0; i<=d; i++){
                j = d - i;
                if(i<r && j<c){
                    printf("%d ", mat[i][j]);
                }
            }
        } else {
            for(j=0; j<=d; j++){
                i = d - j;
                if(i<r && j<c){
                    printf("%d ", mat[i][j]);
                }
            }
        }
    }
    printf("\n");

    return 0;
}