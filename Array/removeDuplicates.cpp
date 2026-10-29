#include <iostream>
#include <set>
using namespace std;

//Bruteforce approach
// TC - O(NlogN + N)
// SC - O(N)
/*
int countUnique(int arr[], int n){
    set<int> st;
    for (int i=0; i<n; i++){
        st.insert(arr[i]);
    }
    int index = 0;
    for (auto it : st){
        arr[index]=it;
        index++;
    }
    return index;
}
*/

//Optimal approach (Two pointers)
// TC - O(N)
// SC - O(1)
int countUnique(int arr[], int n){
    int i=0, j=1;
    while(j!=n){
        if (arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
            j++;
        }else{
            j++;
        }
    }
    return i+1;
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
    int unique = countUnique(arr,n);
    cout<<"The number of unique elements in the given array is: "<<unique<<endl;
    return 0;
}