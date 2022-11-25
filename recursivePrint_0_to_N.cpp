// print 0 to N using recursive function
// print N to 0 using recursive function
// clang++ recursivePrint_0_to_N.cpp -std=c++11
// g++ recursivePrint_0_to_N.cpp -std=c++11

#include <iostream>
#include <vector>
void print_0_N(int i) {
    std::cout<<"("<<i<<")";
    if (i>0) {
        print_0_N(i-1);
    }
    std::cout<<i<<",";
    std::cout<<"["<<i<<"]";
}
void print_N_0(int i) {
    std::cout<<"("<<i<<")";
    std::cout<<i<<",";
    if (i>0){
        print_N_0(i-1);
    }
    std::cout<<"["<<i<<"]";
}
void print_i_n_c(int i,int n,int c) {
    std::cout<<"("<<c<<")";//depth of recursive call
    std::cout<<i<<",";
    if(i<n){
        print_i_n_c(i+1,n,c+1);
    }
    std::cout<<"["<<c<<"]";//end of c-th recursive call
}
void print_n_i_c(int i,int n,int c) {
    std::cout<<"("<<c<<")";//depth of recursive call
    if(i<n){
        print_n_i_c(i+1,n,c+1);
    }
    std::cout<<i<<",";
    std::cout<<"["<<c<<"]";//end of c-th recursive call
}
int main(){
    print_0_N(10);//0,1,2,3,4,5,6,7,8,9,10
    std::cout<<std::endl;
    print_N_0(10);//10,9,8,7,6,5,4,3,2,1,0
    std::cout<<std::endl;
    print_i_n_c(0,10,0);
    std::cout<<std::endl;
    print_n_i_c(0,10,0);
    std::cout<<std::endl;
    return 0;
}