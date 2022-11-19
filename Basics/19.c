//find all prime numbers in the given interval.
#include<stdio.h>
int checkprime(int num){
    int f=1;
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            f=0;
            break;
        }
    }
    return f;
}
int main(){
    int n1,n2,c;
    printf("Enter the range: ");
    scanf("%d%d",&n1,&n2);
    printf("Prime number in this range: \n");
    for(int i=n1;i<=n2;i++){
        c=checkprime(i);
        if(c==1){
            printf("%d\t",i);
        }

    }
    return 0;
}