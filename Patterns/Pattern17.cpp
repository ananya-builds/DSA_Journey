#include <iostream>
using namespace std;

void print(int n){
    for (int i=0;i<n;i++){
        for (int j=1;j<n-i;j++){
            cout<<" ";
        }for (int k=65;k<=65+i;k++){
            cout<<char(k);
        }
        for (int l=64+i;l>=65;l--){
            cout<<char(l);
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    print(n);   
    return 0;
}