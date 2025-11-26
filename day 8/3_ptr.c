#include<stdio.h>
int main(){
    int a=20;
    int *ptr=&a;
    printf("value of a: %d\n",a);    printf("value of ptr: %p\n",&a);
    printf("value of p: %p\n",ptr);
    printf("value of *(&a): %d\n",ptr);

}