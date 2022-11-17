//find max and min element of an array
#include<stdio.h>
int main(){
    int n;
    printf("Enter the array size: ");
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        printf("Enter arr[%d]: ",i+1);
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    
    printf("Max val: %d\n",max);
    printf("Min val: %d\n",min);

}