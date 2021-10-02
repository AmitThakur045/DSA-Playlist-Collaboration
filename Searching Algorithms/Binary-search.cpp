#include <bits/stdc++.h>
using namespace std;

int main() {
    // array should be sorted to implement binary search
    int arr[] = {2,3,6,7,8,9,10,12,15}; 
    int size = sizeof(arr)/sizeof(int);
    bool flag = false;

    int key;
    cout<<"Enter the element to search : ";
    cin>>key;

    int start = 0, end = size-1;
    while(start <= end) {
        int mid = start + (end - start) / 2;    // mid point of start and end;
        if(arr[mid] == key) {
            flag = true;
            break;
        }
        if(arr[mid] < key) {
            start = mid+1;
        } else {
            end = mid-1;
        }
    }
    if(flag == true)
        cout<<"Element found";
    else
        cout<<"Element not found";

    return 0;
}