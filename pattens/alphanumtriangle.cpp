#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the number of rows:";
    cin>>m;
    for (int i = 1; i <=m; i++)
    {
        for (int j = 1; j <=i; j++)
        {if(i%2==0)
            cout<<(char)(j+64);
        else
            cout<<j;
        }
        
        cout<<endl;
    }
    
}