#include <iostream>
using namespace std;

// Alternatively
void print(int n){
    for (int i=0;i<2*n-1;i++){
        for (int j=0; j<2*n-1;j++){
            int top=i;
            int left=j;
            int right=(2*n-2)-j;
            int bottom=(2*n-2)-i;
            cout<<n-min(min(top,bottom),min(left,right));
        }
        cout<<endl;
    }
}

// void print(int n){
//     for (int i=0;i<n;i++){
//         for (int j=n;j>n-i;j--){
//             cout<<j;
//         }
//         for (int k=0;k<2*n-2*i-1;k++){
//             cout<<n-i;
//         }
//         for (int l=n-i+1;l<=n;l++){
//             cout<<l;
//         }
//         cout<<endl;
//     }
//     for (int i=0;i<n-1;i++){
//         for (int j=n;j>i+1;j--){
//             cout<<j;
//         }
//         for (int k=0;k<2*i+1;k++){
//             cout<<i+2;
//         }
//         for (int l=i+2;l<=n;l++){
//             cout<<l;
//         }
//         cout<<endl;
//     }
// }

int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    print(n);   
    return 0;
}