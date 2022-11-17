//Distance between two points
#include<stdio.h>
#include<math.h>
struct pt{
    int x1,x2,y1,y2;
};
int main(){
    int X,Y;
    float D;
   struct pt p;
   printf("Enter point 1 coordinates: ");
   scanf("%d%d",&p.x1,&p.y1);
   printf("Enter point 2 coordinates: ");
   scanf("%d%d",&p.x2,&p.y2); 
   X=p.x2-p.x1;
   Y=p.y2-p.y1;
   D=sqrt(pow(X,2)+pow(Y,2));
   printf("Distance between the two points: %f",D);
   return 0;
}