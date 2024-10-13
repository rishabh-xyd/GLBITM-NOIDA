//WAP to enter a number and print reverse of the number
#include<iostream>
using namespace std;
int main (){
    int n,m=0,r=0;
    cout<<"enter any number:";
    cin>>n;
    while(n!=0){
        m=n%10;
        r=r*10+m;
        n=n/10;
    }
    cout<<r;
}
