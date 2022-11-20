//Swap two integers(given)
#include<stdio.h>
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int a=9;
    int b=6;
    printf("%d%d",a,b);
    printf("\n");
    swap(&a,&b);
    printf("%d%d",a,b);
}