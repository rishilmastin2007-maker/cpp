#include<iostream>
using namespace std;

int main() {
    int a[] = {12, 6, 7, 34, 9, 230, 2, 8};
    int n = sizeof(a) / sizeof(a[0]); // Correct way to get array size
    int i = 0;
    int j = n - 1;
    
    cout << "Original array: ";
    for (int k = 0; k < n; k++) {
        cout << a[k] << " ";
    }
    cout << endl;
    
    while (i < j) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    
    cout << "Reversed array: ";
    for (int k = 0; k < n; k++) {
        cout << a[k] << " ";
    }
    cout << endl;
    
    return 0;
}