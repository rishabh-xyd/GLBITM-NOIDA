//  1
//  23
//  456
//  789
#include<stdio.h>
int main(){
    int n=1,row;
    printf("Enter the rows : ");
    scanf("%d",&row);
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
        printf("%d",n);
        n++;
        }
        printf("\n");
    }
    return 0;
}