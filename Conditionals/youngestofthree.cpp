#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the ram's age";
    cin>>a;
    cout<<"enter the shayam's age";
    cin>>b;
    cout<<"enter the ajay's age";
    cin>>c;
    if (a>b)
    {   if(c>b)
        cout<<b<<"shayam is the youngest";
        else
        cout<<c<<"ajay is youngest";
    }
    else if (b>a)
    {   cout<<a<<"ram is the youngest";
    }    else{
        cout<<b<<"shayam is the youngest";
    }
}