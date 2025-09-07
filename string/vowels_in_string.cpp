#include<iostream>
using namespace std;
int main(){
    string str="cow is a animal with for legs";
    int count=0;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count++;
        }
    }
    cout<<count;
}