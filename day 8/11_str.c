#include<stdio.h>
#include<string.h>
struct student{
    char name[30];
    int roll_num;
    int marks;
}st1,st2;
int main(){
    strcpy(st1.name,"jayashree");
    st1.marks=20;
    st1.roll_num=2;
    printf("student details:\n");
    printf("name:%s\n",st1.name);
    printf("roll_num:%d\n",st1.roll_num);
    printf("marks:%d\n",st1.marks);

    strcpy(st2.name,"saraswathi");
    st2.marks=30;
    st2.roll_num=15;
    printf("student details:\n");
    printf("name:%s\n",st2.name);
    printf("roll_num:%d\n",st2.roll_num);
    printf("marks:%d\n",st2.marks);
}