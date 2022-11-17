//add two array and store in third array
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];
    int sum[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    for(int j=0;j<n;j++){
        scanf("%d",&arr2[j]);
    }
    for(int k=0;k<n;k++){
        sum[k]=arr1[k]+arr2[k];
        printf("%d\t",sum[k]);
    }
    return 0;
}