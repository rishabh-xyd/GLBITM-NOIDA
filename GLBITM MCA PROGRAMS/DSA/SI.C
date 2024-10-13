// wap to calculte si unit
#include<stdio.h>
int main (){
    float p,r,t,SI;
    printf("\nenter principle:");
    scanf("%f",&p);
    printf("\nenter rate:");
    scanf("%f",&r);
    printf("\nenter time:");
    scanf("%f",&t);
    SI=p*r*t/100;
    printf("\nSimple Interst:%f",SI);
    return 0;
}