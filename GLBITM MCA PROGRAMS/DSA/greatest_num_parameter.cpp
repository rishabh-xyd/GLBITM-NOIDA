//Greatest number using function(with parameter, with return)
#include<iostream>
using namespace std;
int gr_of_two(int,int);
int main(){
    int greater;
    int a,b;
    cout<<"enter the numbers: ";
    cin>>a>>b;
    greater=gr_of_two(a,b);
    cout<<"greates number is:"<<greater;
    return 0;
}
int gr_of_two(int x,int y){
    int g;
    if(x>y)
    g=x;
    else
    g=y;
    return g;
}
