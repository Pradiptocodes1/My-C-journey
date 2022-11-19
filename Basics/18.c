//ascending and descending order
#include<stdio.h>
void asc(int arr[],int n){
    int temp;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
void desc(int arr[],int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Val[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("Ascending Order: \n");
    asc(arr,n);
    printf("\n");
    printf("Descending order: \n");
    desc(arr,n);
}