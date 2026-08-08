#include <iostream>
using namespace std;

void print(int n){
    int k=1;
    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            cout<<k<<" ";
            k++;
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