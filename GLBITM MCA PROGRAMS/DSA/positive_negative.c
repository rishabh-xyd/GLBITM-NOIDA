//WAP to check the number is positive or negative
#include<stdio.h>
int main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(num<0)
    printf("number is negative");
    else if(num==0)
    printf("number is zero");
    else
    printf("number is positive");
    return 0;

}