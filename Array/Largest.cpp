#include <iostream>
using namespace std;

int largest(int arr[], int n){
    int l = arr[0];
    for (int i = 1; i<n; i++){
        if (l<arr[i])
        l = arr[i];
    }
    return l;
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
    int large = largest(arr,n);
    cout<<"The largest element is "<<large<<endl;
    return 0; 
}