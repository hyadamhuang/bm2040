#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
bool isSubstring(string s1,string s2) {//s1 pattern, s2 string
    bool match = false;
    for (int i=0;i<s2.length()-s1.length();++i){
        if(s1==s2.substr(i,s1.length())){
            match = true;
            cout<<string(i,'_')<<s1<<endl;
            cout<<s2<<endl;
            break;
        }
    }
    return match;
}
int main(int argc,char **argv){
    if(argc<3){
        cout<<"usage: a.exe pattern stringToBeSearched";
        return -1;
    }
    string s1=string(argv[1]);
    string s2=string(argv[2]);
    cout<<"s1: "<<s1<<endl;
    cout<<"s2: "<<s2<<endl;
    if ((s1.length() && s2.length()) && isSubstring(s1,s2+s2)){
        cout<<s2<<" is a rotation of "<<s1<<endl;
    }
    else {
        cout<<s2<<" is NOT a rotation of "<<s1<<endl;
    }
    return 0;
}