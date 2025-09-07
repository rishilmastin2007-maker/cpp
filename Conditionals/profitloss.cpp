#include<iostream>
using namespace std;
int main (){
    int cp;
    cout<<"Enter the cost price  :";
    cin>>cp;
    int sp;
    cout<< "Enter the selling price :";
    cin>>sp;
    if(sp>cp)
    cout<<"profit";
    if(cp>sp)
    cout<<"loss";
    if(cp==sp)
    cout<<"no profit no loss";

}