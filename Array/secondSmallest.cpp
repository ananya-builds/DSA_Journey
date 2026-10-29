#include <iostream>
using namespace std;

int secondSmallest(int arr[], int n){
    int l=arr[0];
    int s=INT32_MAX;
    for (int i=1; i<n; i++){
        if (l>arr[i]){
            s=l;
            l=arr[i];
        }else if(s>arr[i]){
            s=arr[i];
        }
    }
    return s;
}

int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int secondSmall = secondSmallest(arr,n);
    cout<<"The second smallest element is "<<secondSmall<<endl;
    return 0; 
}