//WAP to check the number is even or odd.
#include<stdio.h>
int main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(num==0)
    printf("number is zero");
    else if(num%2==0 )
    printf("\n%d is even",num);
    else
    printf("\n%d is odd",num);
    return 0;
    
}