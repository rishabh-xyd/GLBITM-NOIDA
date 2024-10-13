//  WAP to enter any number from 0-6 by user and print name of the days accordingly.
#include<stdio.h>
int main (){
    int w;
    printf("Enter the number of week:");
    scanf("%d",&w);
    if(w==0)
    printf("Sunday");
    else if(w==1)
    printf("Monday");
    else if(w==2)
    printf("Tuesday");
    else if(w==3)
    printf("Wednessday");
    else if(w==4)
    printf("Thursday");
    else if(w==5)
    printf("Friday");
    else if(w==6)
    printf("Saturday");
    
    return 0;
}