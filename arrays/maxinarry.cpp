#include<iostream>
using namespace std;
int main() {
int arr[]={12,6,7,34,23,2,8,31};
    int n=sizeof(arr)/4;
    cout<<"No of elements :"<<n<<endl;
    int mx=arr[0];
    int mn=arr[0];
    for (int i = 0; i <n; i++)
    {
     //if(arr[i]>mx)
     //mx=arr[i]; or
     mx=max(mx,arr[i]);
     mn=min(mn,arr[i]);
    }
    cout<<mx<<endl;
    cout<<mn;

}