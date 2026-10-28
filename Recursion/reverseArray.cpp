#include <iostream>
using namespace std;

// Using single pointer
void reverse(int i, int n, int arr[]){
    if (i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    reverse(i+1,n,arr);
}

// Using two pointers
/*
void reverse(int i, int j, int arr[]){
    if (i>=j){
        return;
    }
    swap(arr[i],arr[j]);
    reverse(i+1,j-1,arr);
}
*/

int main() {
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    /*
    reverse(0,n-1,arr);
    for (int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    */

    reverse(0,n,arr);
    for (int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}