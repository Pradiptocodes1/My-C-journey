//reverse an array
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of values: ");
    scanf("%d",&n);
    int arr[n];
     int temp;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf(" %d\t",arr[i]);

    }
    printf("\nArray Elements reversed: \n");
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        }
    }
    for(int i=0;i<n;i++){
        printf(" %d\t",arr[i]);

    }

}