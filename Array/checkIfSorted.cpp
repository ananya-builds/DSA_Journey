#include <iostream>
using namespace std;

bool isSorted(int arr[], int n){
    for (int i=1; i<n; i++){
        if(arr[i]>=arr[i-1]){}
        else return false;
    }
    return true;
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
    bool isSort = isSorted(arr,n);
    if(isSort){
        cout<<"The given array is sorted."<<endl;
    }else{
        cout<<"The given array is not sorted."<<endl;
    }
    return 0;
}