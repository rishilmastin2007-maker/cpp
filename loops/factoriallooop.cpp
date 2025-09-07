#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int p=1;
    for (int i = 1; i <=n; i++)
    {
        p *=i;
    }
    cout<<p;
    
}