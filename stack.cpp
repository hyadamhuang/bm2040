#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
#define MAX 1000
class Stack {
friend std::ostream &operator<<(std::ostream&,const Stack&);
public:
    //double a[MAX];//max size of stack
    Stack(){top=-1;}
    bool push(const double x);
    bool pop();
    double peek();
    bool isEmpty();
    //bool isFull();
private:
    int top;
    double a[MAX];//max size of stack
};

bool Stack::push(const double x){
    if(top<MAX-1){
        ++top;
        a[top]=x;
        return true;
    }
    else{
        cout<<"stack is full"<<endl;
        return false;
    }
}

bool Stack::isEmpty(){
    if (top<0){
        return true;
    }
    else {
        return false;
    }
}

double Stack::peek(){
    if (!isEmpty()){
        return a[top];
    }
    else{
        cout<<"stack is empty"<<endl;
        return 0;
    }
}

bool Stack::pop(){
    if(!isEmpty()){
        --top;
        return true;
    }
    else{
        cout<<"stack is empty"<<endl;
        return false;
    }
}

std::ostream& operator<<(std::ostream &out,const Stack &s){
    for (int i=0;i<=s.top;++i){
        out<<s.a[i]<<",";
    }
    out<<endl;
    return out;
}
void hanoi(int n,Stack &S,Stack &D,Stack &A)
{
    static int count=0;
    if (n==0){
        return;
    }
    hanoi(n-1,S,A,D);
    D.push(S.peek());
    S.pop();
    ++count;
    cout<<S<<A<<D;
    cout<<"========="<<count<<"========="<<endl;
    hanoi(n-1,A,D,S);
}
int main(int argc, char **argv){
    Stack s1,s2,s3;
    int n=atoi(argv[1]);
    for (int i=n;i>0;--i){
        s1.push(double(i));
    }
    cout<<s1<<s2<<s3;
    cout<<"========="<<0<<"========="<<endl;
    hanoi(n,s1,s3,s2);
    return 0;
}