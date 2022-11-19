//Given an array of integers, update every element with multiplication of previous
//and next elements with following exceptions.
//a) First element is replaced by multiplication of first and second.
//b) Last element is replaced by multiplication of last and second last.

#include<stdio.h>
void arrangeit(int arr[],int n){
    int prev=arr[0];
    arr[0]=arr[0]*arr[1];
    for(int i=1;i<n-1;i++){
        int curr=arr[i];
        arr[i]=prev*arr[i];
        prev=curr;
    }
    arr[n-1]=prev*arr[n-1];
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
int main(){
    int n;
    printf("Enter thenumber of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Val[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("After suitable arrangement: \n");
    arrangeit(arr,n);
}