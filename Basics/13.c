#include<stdio.h>
struct stud{
    char name[50];
    int roll;
};
int main(){
    struct stud student1;
    struct stud student2={"A",2};
    printf("Name: ");
    scanf("%s",student1.name);
    printf("Roll: ");
    scanf("%d",student1.roll);
    student1 = student2;
    if((student1.roll==student2.roll ) && (student1.name==student2.name)){
        printf("Same");
    }
    else{
        printf("Diff");
    }
    return 0;
}
//diff