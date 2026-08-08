#include <iostream>
using namespace std;

// Alternatively
void print(int n){
    int start=0;
    for (int i=0; i<n; i++){
        if (i%2==0) start=1;
        else start=0;
        for (int j=0; j<=i; j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
}

// void print(int n){
//     for (int i=0; i<n; i++){
//         for (int j=0; j<=i; j++){
//             if (i%2==0){
//                 if (j%2==0){
//                     cout<<"1";
//                 }else{
//                     cout<<"0";
//                 }
//             }else{
//                 if (j%2==0){
//                     cout<<"0";
//                 }else{
//                     cout<<"1";
//                 }
//             }
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