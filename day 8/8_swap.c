#include<stdio.h>
int main(){
    int a=20;
    int b=30;
    int c;
    printf("before swap:%d,%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("after swap: %d,%d\n",a,b);
}