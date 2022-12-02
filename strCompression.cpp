#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
int main(int argc, char **argv)
{
    if (argc<2){
        cout<<"usage: a.exe aaabbbbccccc";
        return -1;
    }
    string s0=argv[1];
    string s1=""; //for storing the compress string
    int c=-1,counter=0;
    for(auto ch:s0){
        if(ch!=c){
            if (counter>0){ //not the first character of s0
                s1+=c;
                s1+=std::to_string(counter);// int to string
            }
            c=ch;//store the next character
            counter=1;//reset counter
        }
        else { //repeated character
            ++counter;
        }
    }
    // the last character pattern
    s1+=c;
    s1+=std::to_string(counter);
    // check if the compressed string is shorter
    if (s1.length()<s0.length()){
        cout<<s1<<endl; // print compress
    }
    else {
        cout<<s0<<endl; // print the original
    }
    return 0;
}