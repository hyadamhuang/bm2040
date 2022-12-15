#include <iostream>
#include <sstream>
#include <string>
#include <map>
using std::cin;
using std::cout;
using std::map;
using std::endl;
using std::string;
using std::stringstream;
//istream& getline(istream& is, string& str)
//istream& getline(istream& is, string& str, char delim)
//is: an object of istream class telling the function from where to read the input
//str: a string object for storing the input from 'is'
//delim: a delimitation character to stop reading further
int main() {
    string line,word;
    while (getline(cin,line)) { //get a line from console input
        stringstream lline(line);
        if (line.size()==0) break; //exit if null string
        while(getline(lline,word,' ')) { // go through word by word seperated by ' '
            // use extra data structure to count char frequency
            map<char, size_t> char_count; // (char,counter) pair
            for (auto it=word.begin();it!=word.end();++it){
                ++char_count[*it]; // associative array counter[char] for (char,counter)
            }
            int flag=0; // if unique
            for (const auto &ch : char_count){
                if (ch.second>1){
                    cout<<word<<" is NOT unique"<<endl;
                    flag=1;
                    break;
                }
            }
            if (flag==0) cout<<word<<" is unique"<<endl;
            // without using extra data structure
            flag=0;
            for (int i=0;i<word.size();++i){
                for (int j=i+1;j<word.size();++j){
                    if (word[i]==word[j]){
                        cout<<word<<" is NOT Unique"<<endl;
                        flag=1;
                        break;
                    }
                }
                if (flag>0) break;// to break from the upper for-loop 
            }
            if (flag==0) cout<<word<<" is Unique"<<endl;
        }
    }
    return 0;
}