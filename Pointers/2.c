//Find the average
#include<stdio.h>
float findaverage(int arr[], int n){
    int sum=0;
    int *p;
    p=&arr[0]; //or p=arr
    for(int i=0;i<n;i++){
        sum+=*(p+i);
    }
    return (float)sum/n;
}
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the values: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Entered Values: \n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);

    }
    float av=findaverage(arr,n);
    printf("Average: %f",av);

}