#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the number of rows:";
    cin>>m;
    for (int i = 1; i <=m; i++)
    {
        for (int j = 1; j <=m; j++)
        {
            cout<<(char)(j+64)<<" ";
        }
        
        cout<<endl;
    }
    
}//asci value of a is 94