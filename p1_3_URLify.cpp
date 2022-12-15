#include <iostream>
#include <sstream>
#include <string>
#include <map>
using std::cin;
using std::cout;
using std::endl;
using std::string;
#define MAX 1000
// replace ' ' with "%20"
int main() {
    char s[MAX];
    string line;
    getline(cin,line);
    int i;
    int sz = line.size();
    for (i=0;i<sz;++i){
        s[i]=line[i]; //copy std::string to C string array
    }
    s[i]='\0'; // s is large enough, we did not check overflow
    int count=0;
    for (i=0;i<sz+count*2;++i){ //replace 1 char ' ' with 3 char's %20
        if (s[i]==' '){
            ++count;
            for (int j=sz+count*2;j>=i+3;--j){
                s[j]=s[j-2]; // move 2 positions to the right
            }
            s[i]='%';
            s[i+1]='2';
            s[i+2]='0';
        }
    }
    cout<<s<<endl;
    return 0;
}