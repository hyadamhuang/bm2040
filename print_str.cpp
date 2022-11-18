#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
void print(const string &s){
    for(auto ch:s){
        if(isspace(ch)){
            cout<<endl;
        }
        else{
            cout<<ch;
        }
    }
    cout<<endl;
}
int main(int argc, char** argv){
    string s(argv[1]);
    cout<<s<<endl;
    /*
    for(auto ch:s){
        if(isspace(ch)){
            cout<<endl;
        }
        else{
            cout<<ch;
        }
    }
    cout<<endl;
    */
    print(s);
    return 0;
}