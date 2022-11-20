//Add two complex numbers
#include<stdio.h>
struct complex{
    int re;
    int img;
};
void add(struct complex *x,struct complex *y,struct complex *z){
    z->re=x->re+y->re;
    z->img=x->img+y->img;
}
int main(){
    struct complex a,b,c;
    printf("Enter val 1(real and imaginary part): ");
    scanf("%d %d",&a.re,&a.img);
    printf("Enter val 2(real and imaginary part): ");
    scanf("%d %d",&b.re,&b.img);
    add(&a,&b,&c);
    printf("Sum: %d + %di",c.re,c.img);
}