#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the number of rows:";
    cin>>m;
    int n;
    cout<<"Enter the numbe of star:";
    cin>>n;
    for (int i = 1; i <=m; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            cout<<"* ";
        }
        
        cout<<endl;
    }
    
}