#include<iostream>
using namespace std;
int main(){
    int arr[]={12,6,7,34,23,2,8,31};
    int n=sizeof(arr)/4;
    cout<<n<<endl;
    int sum=0;
    for (int i = 0; i <n; i++)
    {
        sum+=arr[i];
    }
    cout<<sum;
}