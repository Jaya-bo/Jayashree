#include<stdio.h>
int main(){
    int a=20;
    int *p;
    int *ptr=&a;
    printf("before of a: %d\n",a);
    *ptr=50;
    printf("changed value of a: %d\n",a);
    (*ptr)++;
    printf("changed value of a: %d\n",a);
    return 0;
}