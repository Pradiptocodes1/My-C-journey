//sum of diagonals of a matrix

#include<stdio.h>
int main(){
    int n;
    int digsum=0;
    printf("Enter the size of the matrix:");
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
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                digsum+=mat[i][j];
            }
        }
    }
    printf("Sum of the diagonal: %d",digsum);

}
