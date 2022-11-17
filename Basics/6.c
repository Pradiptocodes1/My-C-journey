//string length withput using library function
#include<stdio.h>
#include<string.h>
int main(){
    char str1[50];
    int num=0;
    printf("Enter the string: ");
    scanf("%s",&str1);
    for(int i=0;str1[i]!='\0';i++){
        num++;
    }
    printf("Total characters: %d",num);
}