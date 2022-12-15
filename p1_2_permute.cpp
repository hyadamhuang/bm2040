#include <iostream>
#include <sstream>
#include <string>
#include <map>
using std::cin;
using std::cout;
using std::endl;
using std::string;
#define MAX 100
int main() {
    int M[MAX];
    string w1,w2;
    cin>>w1;
    cin>>w2;
    int flag=0;
    if (w1.size()==w2.size()){
        int sz=w1.size();
        for (int i=0;i<sz;++i){
            M[i]=-1; // initialize to -1
        }
        for (int i=0;i<sz;++i){
            for (int j=0;j<sz;++j){
                if (w1[i]==w2[j] && M[j]<0) {
                    M[j]=i;
                    break;
                }
            }
        }
        for (int j=0;j<sz;++j){
            if (M[j]<0) ++flag;
        }
    }
    if (flag>0){
        cout<<w1<<','<<w2<<" are NOT permutation strings"<<endl;
    }
    else {
        cout<<w1<<','<<w2<<" are permutation strings"<<endl;
    }
    cout<<"difference:"<<flag<<endl;
    return 0;
}