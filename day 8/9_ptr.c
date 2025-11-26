#include<stdio.h>
int main(){
    int a=20;
    int b=30;
    int *ptr1=&a;
    int *ptr2=&b;
    int c;
    printf("before swap:%d,%d\n",a,b);
    c=*ptr1;
    *ptr1=*ptr2;
    *ptr2=c;
    printf("after swap: %d,%d\n",a,b);
}