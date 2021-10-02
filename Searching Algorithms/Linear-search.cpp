#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {23,2,28,546,9,78,19};
    int size = sizeof(arr)/sizeof(int);
    bool flag = false;
    int key;

    cout<<"Enter the element you want to find : ";
    cin>>key;

    for(auto i : arr) {
        if(i == key) {
            flag = true;
            break;
        }
    }
    if(flag == true) 
        cout<<"Element found";
    else 
        cout<<"Element not found";
    return 0;
}