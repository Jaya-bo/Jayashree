#include<stdio.h>
#include<stdio.h>
struct student{
    char name[30];
    int roll_num;
};
    int main(){
        struct student st1;
        printf("enter a name:\n");
        scanf("%s",st1.name);
        printf("enter a roll_num:\n");
        scanf("%d",&st1.roll_num);
        printf("student details:\n");
        printf("name:%s\n",st1.name);
        printf("roll_num:%d\n",st1.roll_num);
    }