//Three largest elements in the array.
#include<stdio.h>
void threelarge(int arr[],int n){
    int first;
    int second;
    int third;
    first=second=third=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>first){
            third=second;
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second){
            third=second;
            second=arr[i];
        }
        else if(arr[i]>third){
            third=arr[i];
        }
    }
    printf("First: %d; Second: %d; Third: %d;",first,second,third);
}
int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Val[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    threelarge(arr,n);
}