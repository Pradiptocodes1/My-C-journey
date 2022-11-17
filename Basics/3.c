//first 10 fibonacci

#include<stdio.h>
int main(){
    int n;
    printf("Enter the range: ");
    scanf("%d",&n);
    int arr[n];
    int k;
    arr[0]=0;
    arr[1]=1;
    printf("%d\t",arr[0]);
    printf("%d\t",arr[1]);
    for(k=2;k<n+1;k++){
        arr[k]=arr[k-1]+arr[k-2];
        printf("%d\t",arr[k]);
    }
}