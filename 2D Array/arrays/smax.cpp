#include<iostream>
#include<climits>
using namespace std;
int main() {
int arr[]={12,6,7,34,23,2,8,31};
    int n=sizeof(arr)/4;
    int mx= INT_MIN;
    for (int i = 0; i <n; i++)
    {
     //if(arr[i]>mx)
     //mx=arr[i]; or
     mx=max(mx,arr[i]);
    }
     int smx=INT_MIN;
    for (int i = 0; i <n; i++)
    {
        if(arr[i]!=mx) smx=max(smx,arr[i]);
    }
    cout<<smx;

}