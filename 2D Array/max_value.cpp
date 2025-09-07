#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int arr[4][2]={{76,25},{63,54},{55,36},{57,58}};
    int mx_value=INT_MIN;
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
                mx_value=max(mx_value,arr[i][j]);
            }
            
        }
        cout<<mx_value;
    }