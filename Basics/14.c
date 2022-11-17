//DOB
#include<stdio.h>
struct DOB{
    int dd;
    int mm;
    int yy;
};
int main(){
    struct DOB d1;
    struct DOB d2;
    printf("dd mm yy: ");
    scanf("%d%d%d",&d1.dd,&d1.mm,&d1.yy);
    printf("Current dd mm yy: ");
    scanf("%d%d%d",&d2.dd,&d2.mm,&d2.yy);
    printf("\n Age: %d days %d months %d years\n",d2.dd-d1.dd,d2.mm-d1.mm,d2.yy-d1.yy);
}
