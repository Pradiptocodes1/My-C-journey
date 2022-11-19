//move all zeroes to the end of the array
#include<stdio.h>

void moveallzeroes(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[count++]=arr[i];
        }
    }
    while(count<n){
            arr[count++]=0;
        }
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter val[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("Zeroes at the end:-\n");
    moveallzeroes(arr,n);
}