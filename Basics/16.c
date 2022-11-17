//Add two distance in inch-feet system
#include<stdio.h>
int main(){
    int f1,i1,f2,i2,add1,add2;
    printf("ft-in1: ");
    scanf("%d%d",&f1,&i1);
    printf("ft-in2: ");
    scanf("%d%d",&f2,&i2);
    add1=f1+f2;
    add2=i1+i2;
    if(add2>=12){
        add1+=add2/12;
        add2=add1%12;
    }
    printf("Added: %d %d",add1,add2);
    return 0;
}