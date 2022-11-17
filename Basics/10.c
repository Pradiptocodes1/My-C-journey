//Find transpose
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the matrix");
    scanf("%d",&n);
    int mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("val[%d][%d]: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Entered Matrix: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of the matrix: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",mat[j][i]);
        }
        printf("\n");
    }
}