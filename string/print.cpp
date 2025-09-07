#include<iostream>
using namespace std;
int main(){
    string str="Hello World!";
    int n = str.length();
    for(int i=0; i<n; i++){
        cout<<str[i];
    }
    return 0;
}