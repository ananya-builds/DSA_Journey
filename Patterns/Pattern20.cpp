#include <iostream>
using namespace std;

// Alternatively
void print(int n){
    int spaces = 2*n-2;
    for (int i=1; i<=2*n-1; i++){
        int stars = i;
        if (i>n) stars = 2*n-i;
        for (int j=1;j<=stars;j++){
            cout<<"*";
        }
        for (int j=1; j<=spaces; j++){
            cout<<" ";
        }
        for (int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
        if (i<n) spaces-=2;
        else spaces+=2;
    }
}

// void print(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0; j<=i;j++){
//             cout<<"*";
//         }
//         for(int k=0;k<2*n-2*i-2;k++){
//             cout<<" ";
//         }
//         for(int l=0; l<=i;l++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for (int i=0;i<n-1;i++){
//         for (int j=1;j<n-i;j++){
//             cout<<"*";
//         }
//         for (int k=0;k<2*i+2;k++){
//             cout<<" ";
//         }
//         for (int l=1;l<n-i;l++){
//             cout<<"*";
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