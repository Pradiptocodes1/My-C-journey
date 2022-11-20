//Display a 2D Matrix
#include<stdio.h>

int main(){
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d",&n);
    int mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int *p;
    p=&mat[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",*(p+n*i+j));
        }
        printf("\n");
    }

}