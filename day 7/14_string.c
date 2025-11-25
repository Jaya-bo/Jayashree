#include<stdio.h>
#include<string.h>
int main(){
    char first_name[]="jaya";
    char last_name[]="shree";
    char another_name[]="jayashree";
    printf("length of first_name:%d\n",strlen(first_name));
    printf("full name:%s\n",strcat(first_name,last_name));
    printf("%d\n",strcmp(first_name,another_name));
    if(strcmp(first_name,another_name)==0){
        printf("both strings are equal\n");
    }else{
        printf("both strings are not equal\n");
    }
    printf("first name:%s\n",first_name);
      printf("last name:%s\n",last_name);
        printf("another name:%s\n",first_name);
}
