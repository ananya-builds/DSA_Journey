#include <iostream>
using namespace std;

bool reverseString(int i, int n, char string[]){
    if (i>=n/2) return true;
    if (string[i] != string[n-i-1]) return false;
    else return reverseString(i+1,n,string);
}
int main() {
    int n;
    cout<<"Enter the length of the string: ";
    cin>>n;
    char string[n];
    cout<<"Enter the string: ";
    cin>>string;
    bool isPalindrome = reverseString(0,n,string);
    if (isPalindrome){
        cout<<"The string is a palindrome."<<endl;
    }else{
        cout<<"The string is not a palindrome."<<endl;
    }

    return 0;
}