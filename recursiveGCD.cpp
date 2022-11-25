// find greatest common divisor recursively
// clang++ recursiveGCD.cpp -std=c++11
// g++ recursiveGCD.cpp -std=c++11
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
unsigned int gcd(unsigned int a,unsigned int b,unsigned c) {
    if (b>0) {
        cout<<"("<<a<<","<<b<<","<<c<<")"<<endl;//print out recurve call depth
        return gcd(b,a%b,c+1);
    }
    else {
        cout<<"("<<a<<","<<b<<","<<c<<")"<<endl;//print out recursive call depth
        return a;
    }
}
int main(){
    unsigned int a,b,t;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    t=gcd(a,b,0);
    cout<<"gcd("<<a<<", "<<b<<") = "<<t<<endl;
    return 0;
} 