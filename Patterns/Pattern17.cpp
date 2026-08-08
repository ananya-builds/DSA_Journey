#include <iostream>
using namespace std;

// Alternatively
void print(int n){
    for (int i=0;i<n;i++){
        for (int j=1;j<n-i;j++){
            cout<<" ";
        }
        char ch='A';
        int breakPoint = (2*i)/2;
        for (int k=0;k<=2*i;k++){
            cout<<ch;
            if (k<breakPoint) ch++;
            else ch--;
        }
        cout<<endl;
    }
}
// void print(int n){
//     for (int i=0;i<n;i++){
//         for (int j=1;j<n-i;j++){
//             cout<<" ";
//         }for (int k=65;k<=65+i;k++){
//             cout<<char(k);
//         }
//         for (int l=64+i;l>=65;l--){
//             cout<<char(l);
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