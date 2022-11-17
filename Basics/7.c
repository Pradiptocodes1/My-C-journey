//add two matrix
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the matrix");
    scanf("%d",&n);
    int mat1[n][n];
    int mat2[n][n];
    int sum[n][n];

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("val[%d][%d]: \n",i,j);
        scanf("%d",&mat1[i][j]);
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("val2[%d][%d]: \n",i,j);
        scanf("%d",&mat2[i][j]);
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        sum[i][j]=mat1[i][j]+mat2[i][j];
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("%d\t",sum[i][j]);
    }
    printf("\n");
}
return 0;

}