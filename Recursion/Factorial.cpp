#include <iostream>
using namespace std;

void fact(int n, int f){
    if (n==0){
        cout<<"Output from parameterized function: "<<f<<endl;
        return;
    }
    fact(n-1, f*n);
}

int factorial(int n){
    if (n==0) return 1;
    return n * factorial(n-1);
}

int main() {
    int n;
    cout<<"Enter number of iterations: ";
    cin>>n;
    fact(n,1);
    cout<<"Output of functional recursion: "<<factorial(n)<<endl;
    return 0;
}