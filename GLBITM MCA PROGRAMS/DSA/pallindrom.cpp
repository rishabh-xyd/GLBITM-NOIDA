#include<iostream>
using namespace std;
int main(){
    int num,rev_num=0,reminder;
    cout<<"enter the number:"<<endl;
    cin>>num;
    // for(int i=num;i!=num;num=num/10){
    int orinal_num=num;
    // }
    while(num!=0){

        reminder=num%10;
        rev_num=rev_num*10+reminder;
        num/=10;
    }
    if(orinal_num==rev_num)
    cout<<"the number is pallindrome"<<endl;
    else
    cout<<"the number is not a pallindrome"<<endl;
    return 0;
}