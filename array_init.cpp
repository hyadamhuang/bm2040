#include <string>
#include <iostream>
using std::string;
using std::cout;
int main() {
    unsigned cnt = 42;
    constexpr unsigned sz = 42;
    int arr1[cnt];
    int arr2[sz];
    string bad[cnt]={"1","2","0"};
    int c=0;
    for (auto s:bad){
        cout<<++c<<s<<std::endl;
    }
    return 0;
}