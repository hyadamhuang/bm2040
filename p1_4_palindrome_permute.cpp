#include <iostream>
#include <string>
#include <array>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::array;
int main(){
    array<int,128> A={0};//ascii 128 characters
    string word;
    cin>>word;
    for(auto &ch:word){
        ++A[ch];
    }
    int odd_count=0;
    for(auto &n:A){
        if(n%2) ++odd_count;//at most one odd-counted char
    }
    cout<<odd_count<<endl;
    if(odd_count>1){
        cout<<word<<" is NOT Palindrome Permutation"<<endl;
    }
    else{
        cout<<word<<" is Palindrome Permutation"<<endl;
    }
    return 0;
}