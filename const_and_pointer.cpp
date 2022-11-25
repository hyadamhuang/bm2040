#include <iostream>
int main(){
    typedef char *pstring;
    const pstring cstr=0;// a const type needs initial value
    const pstring *ps;// pointer to "const pstring" does not need init
    const char *cstr1;// pointer to "const char"
    const char s[]="string";//const char array s, needs init
    cstr1=&s[0];//pointer to const char
    ps=&cstr;//pointer to const pstring (const pointer to char)
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