//print sum and average of an element.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the array size: ");
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    int av;
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    av=(float)sum/n;
    printf("Sum: %d\n",sum);
    printf("Average: %d",av);

}