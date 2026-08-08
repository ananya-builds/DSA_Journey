#include <iostream>
using namespace std;

// Alternatively
void print(int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (i==0 || j==0 || i==n-1 || j==n-1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

// void print(int n){
//     for (int i=0;i<n;i++){
//         if (i==0 || i==n-1){
//             for (int j=0;j<n;j++){
//                 cout<<"*";
//             }
//             cout<<endl;
//         }else{
//             for (int j=0;j<n;j++){
//                 if(j==0 || j==n-1){
//                     cout<<"*";
//                 }else{
//                     cout<<" ";
//                 }
//             }
//             cout<<endl;
//         }
//     }
// }

int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    print(n);   
    return 0;
}