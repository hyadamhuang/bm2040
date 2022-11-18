#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main() {
    unsigned scores[11]={};//init to 0
    unsigned grade;
    while (cin>>grade){
        if (grade<=100){
            ++scores[grade/10];//increment the counter
        }
    }
    for (auto i:scores){
        cout<<i<<endl;
    }
    return 0;
}