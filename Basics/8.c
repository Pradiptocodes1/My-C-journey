//multiply two matrices
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d",&n);
    int mat1[n][n];
    int mat2[n][n];
    int multiply[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("val[%d][%d]: ",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("val2[%d][%d]: ",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            multiply[i][j]=0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
            multiply[i][j]+=mat1[i][k]*mat2[j][k];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",multiply[i][j]);
        }
        printf("\n");
    }
}