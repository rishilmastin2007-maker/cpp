#include<iostream>
using namespace std;
void swap(int& x,int& y){//pass by reference
    int temp=x;
    x=y;
    y=temp;
}
int main(){
    int x=2;
    int y=5;
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
}