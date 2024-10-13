//WAP to read number from user and find there sum
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Eneter a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    printf("Sum of a,b,c = %d",a+b+c);
    printf("\nAvg:%d",(a+b+c)/3);
    return 0;
}