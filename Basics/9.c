//check for identity matrix
#include<stdio.h>
int main(){
    int n,f=0;
    printf("Enter the size of the matrix: ");
    scanf("%d",&n);
    int mat1[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("val[%d][%d]: ",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j && mat1[i][j]!=1){
            f=-1;
            break;
            }
            else if(i!=j && mat1[i][j]!=0){
                f=-1;
                break;
            }
        }

    }
    if(f==0){
        printf("Matrix is Identity");
    }
    else{
        printf("Matrix is not identity.");
    }
    return 0;
}