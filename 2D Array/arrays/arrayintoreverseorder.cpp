#include<iostream>
using namespace std;
int main(){
    int a[]={12,6,7,34,9,230,2,8};
    int n= sizeof(a)/4;
    int b[n];
    for(int i=0; i<n;i++){
        b[i]=a[n-1-i];
    }
    for(int i=0; i<n;i++){
        cout<<b[i]<<" ";
    }
}