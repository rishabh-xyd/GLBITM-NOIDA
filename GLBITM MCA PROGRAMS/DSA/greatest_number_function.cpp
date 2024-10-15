//Greatest of two number using function(no parameter,with return)
#include<iostream>
using namespace std;
int gr_of_two();
int main(){
    int greater;
    greater=gr_of_two();
    cout<<"greates number is:"<<greater;
    return 0;
}
int gr_of_two(){
    int a,b,g;
    cout<<"enter the numbers: ";
    cin>>a>>b;
    if(a>b)
    g=a;
    else
    g=b;
    return g;
}
