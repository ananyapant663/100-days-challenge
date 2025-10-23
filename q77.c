/*Check if the elements on the diagonal of a matrix are distinct.
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False
Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True
*/

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
        for(j=0; j<i; j++){
            if(mat[i][i] == mat[j][j]){
                flag = 0;
                break;
            }
        }
    }

    if(flag){
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}