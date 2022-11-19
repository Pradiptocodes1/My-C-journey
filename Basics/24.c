//find the minimum difference
#include<stdio.h>
#include<math.h>
void mindiff(int arr[],int n){
    int mindiff;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(abs(arr[i]-arr[j])<mindiff){
            mindiff=abs(arr[i]-arr[j]);
        }
        }
    }
    printf("The minimum difference obtained: %d",mindiff);
}
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Val[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    mindiff(arr,n);
}