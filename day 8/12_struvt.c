#include<stdio.h>
#include<string.h>
struct lecture{
    char name[30];
    int expierence;
    int salary;
}lec1;
int main(){
    strcpy(lec1.name,"jayashree");
    lec1.expierence=7;
    lec1.salary=20000;
    printf("lecture details:\n");
    printf("name:%s\n",lec1.name);
    printf("expierence:%d\n",lec1.expierence);
    printf("salary:%d\n",lec1.salary);
}
