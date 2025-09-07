#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int main(){
    int a;
    cout<<"Enter the First No: ";
    cin>>a;
     int b;
    cout<<"Enter the Second No: ";
    cin>>b;
    cout<<sum(a,b);
}
