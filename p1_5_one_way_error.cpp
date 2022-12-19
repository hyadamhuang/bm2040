#include <iostream>
#include <string>
#include <array>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::array;
int strsubtract(string s1,string &s2){
    // assume s1 is equal or shorter in length
    int count=s2.size()-s1.size();
    for (auto it1=s1.begin(),it2=s2.begin();it1!=s1.end();++it1,++it2){
        if(*it1 != *it2) ++count;
    }
    return count;
}
int main() {
    int count;
    string w1,w2;
    cin>>w1>>w2;
    int sz=(w1.size()>w2.size() ? w1.size() : w2.size());
    cout<<w1.size()<<","<<w2.size()<<","<<sz<<endl;
    count=strsubtract(w1,w2);
    if(w1.size()!=w2.size()){
        if(w1.size()>w2.size()) swap(w1,w2);
        cout<<w1<<","<<w2<<endl;
        for(int i=0;i<w1.size();++i){
            //insert space to short word at i-th position
            int c=strsubtract(w1.substr(0,i)+" "+w1.substr(i,w1.size()-i),w2);
            cout<<c<<endl;
            if (c<count) count=c;
        }
    }
    cout<<"diff dist is "<<count<<endl;
    return 0;
}