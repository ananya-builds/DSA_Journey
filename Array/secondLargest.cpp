#include <iostream>
using namespace std;

// Better approach : O(2N)
/*
int secondLargest(int arr[], int n){
    int l = -1000000;
    int finalL = -1000000;
    for (int i=0; i<2; i++){
        for (int j=0; j<n; j++){
            if (i==1 && arr[j]==finalL) continue;
            if(l<arr[j]){
                l = arr[j];
            }
        }
        finalL = l;
        l = -1000000;
    }
    return finalL;
}
*/

// Optimal approch : O(N)
int secondLargest(int arr[], int n){
    int l=arr[0];
    int s=INT32_MIN;
    for (int i=1; i<n; i++){
        if (l<arr[i]){
            s=l;
            l=arr[i];
        }else if(s<arr[i]){
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
    int secondLarge = secondLargest(arr,n);
    cout<<"The second largest element is "<<secondLarge<<endl;
    return 0; 
}