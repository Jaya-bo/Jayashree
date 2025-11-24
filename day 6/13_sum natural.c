#include <stdio.h>
int nNaturalNo(int n);
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d", &num);
    fact(num);
    fact(num);
    fact(num);
    fact(num);
}

void fact(int num)
{
    int isprime = 1;
    if (num <= 1)
    {
        isprime = 0;
    }
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            isprime=0;
            break;
        }
    }
    if(isprime==1){
        printf("i is a prime number\n");
    }else{
        printf("not a prime number\n");
    }
}