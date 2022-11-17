//mean and standard deviation
#include<stdio.h>
#include<math.h>
int main(){
    int n;
     int s=0;
    float av,t,t1=0,sig,si;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        s+=arr[i];
    }
    av=(float)s/n;
    printf("Mean: %f\n",av);
    for(int i=0;i<n;i++){
        t=(float)arr[i]-av;
        t1+=pow(t,2);
    }
    for(int i=0;i<n;i++){
        si=t1/n;
        sig=sqrt(si);
    }
    printf("Standard deviation: %f",sig);
}