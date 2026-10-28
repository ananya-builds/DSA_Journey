#include <iostream>
using namespace std;

//Parameterized Recursion
void func(int n, int sum){
    if (n<1){
        cout<<"Output of parameterized recursion: "<<sum<<endl;
        return;
    }
    return func(n-1,sum+n);
}
// Functional Recursion
int f(int n){
    if (n==0){
        return 0;
    }
    return n + f(n-1);
}

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    func(n,0);
    cout<<"Output of functional recursion: "<<f(n)<<endl;
    return 0;
}