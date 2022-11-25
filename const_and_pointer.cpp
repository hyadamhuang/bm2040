#include <iostream>
int main(){
    typedef char *pstring;//pointer to char
    const pstring cstr=0;// a const type needs initial value
    const pstring *ps;// pointer to "const pstring" does not need init
    const char *cstr1;// pointer to "const char"
    const char s[]="string";//const char array s, needs init
    cstr1=&s[0];//pointer to const char
    ps=&cstr;//pointer to const pstring (const pointer to char)
    //ps=&cstr1;//compile error
    cstr1=cstr;//ptr to const char vs const ptr to char
    //cstr=cstr1;//complie error
    cstr1=*ps;
    std::cout<<s<<std::endl; //ok
    std::cout<<ps<<std::endl;//0x7ff7b6480890
    //std::cout<<cstr<<std::endl;//runtime fault
    cstr1=s;
    std::cout<<cstr1<<std::endl;
    typedef double age;
    typedef double weight;
    age a=10;
    weight w=a; // ok
    struct AGE{
        double age;
    };
    struct WEIGHT{
        double weight;
    };
    AGE A;
    A.age=10;
    AGE B=A;
    //WEIGHT W=A; // error
    return 0;
}