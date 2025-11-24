#include<stdio.h>
int main(){
    int a=20;
    int b=10;
    if(a>b){
        printf("a is:%d\n",a);
    }else{
        printf("b is:%d\n",b);
    }
    (a>b)?printf("a is:%d\n",a) :printf("b is:%d\n",b);

}