//WAP to enter dep name and section, if dep name is "m" then ask user to print

#include<stdio.h>
int main(){
    char dep_name;
    int sec;
    printf("\nenter the name of the department: ");
    scanf("%c",&dep_name);
    if(dep_name=='m'){
    printf("\n enter the section: ");
    scanf("%d",&sec);   
        if(sec<=3){
            printf("\n ");
        }
        else
        printf("\n");
    }
    else{
        printf("\n");
    }
    return 0;
}