//store information of 10 students
#include<stdio.h>
struct studd{
    char name[50];
    int roll;
}s[10];
int main(){
    for(int i=0;i<10;i++){
        printf("Student[%d]: \n",i+1);
        printf("Name: ");
        scanf("%s",&s[i].name);
        printf("Roll: ");
        scanf("%d",&s[i].roll);
    }
    for(int i=0;i<=10;i++){
        printf("Name: %s\n",s[i].name);
        printf("Roll: %d\n\n",s[i].roll);
    }
    return 0;
}
