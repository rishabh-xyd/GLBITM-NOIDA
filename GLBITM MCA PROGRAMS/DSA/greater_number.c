// WAP to enter three no and print grater number
#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("enter the three numbers:");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2&&n1>n3)
    printf("\n%dis greater",n1);
    else if(n2>n3)
    printf("\n%dis greater",n2);
    else
    printf("\n%dis greater",n3);
    return 0;
    
}