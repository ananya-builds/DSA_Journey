#include <iostream>
using namespace std;

void print(int i){
    if (i<1){
        return;
    }
    cout<<i<<endl;
    print(i-1);
}

int main() {
    int n;
    cout<<"Enter number of iterations: ";
    cin>>n;
    print(n);
    return 0;
}