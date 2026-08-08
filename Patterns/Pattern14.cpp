#include <iostream>
using namespace std;

void print(int n){
    for (int i=0;i<n;i++){
        for (int j=65;j<=65+i;j++){
            cout<<char(j);
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