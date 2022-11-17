//enter and display student details
#include<stdio.h>
struct student{
    char name[50];
    int roll;
}s[5];
int main(){
    int n;
    printf("Enter the list size: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter name: ");
        scanf("%s",&s[i].name);
        printf("Enter the roll number: ");
        scanf("%d",&s[i].roll);
    }
    printf("Student details: ");
    for(int i=0;i<n;i++){
        printf("Student details for student %d\n",i+1);
        printf("Name: %s\n",s[i].name);
        printf("Roll: %d\n",s[i].roll);
    }
    return 0;
}