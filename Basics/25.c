
#include<stdio.h>
int main(){
    int n;
    int temp;
    printf("Enter the size of the matrix: ");
    scanf("%d",&n);
    int mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("val[%d][%d]: ");
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Entered matrix: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                if(mat[i][j]>mat[i+1][j+1]){
                    temp=mat[i][j];
                    mat[i][j]=mat[i+1][j+1];
                    mat[i+1][j+1]=temp;
                }
            }
        }
    }
    printf("After rearrangement:-\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
}
