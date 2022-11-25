// code to read a line of input text from console/terminal
// clang++ getline_input_text.cpp -std=c++11
// g++ getline_input_text.cpp -std=c++11
#include <iostream>
#include <string>

int main()
{
    std::string s;
    std::cout<<"please enter a line of text: ";
    std::getline(std::cin,s);
    std::cout<<s<<std::endl;
    for (auto ch:s){ // range-for
        std::cout<<ch;
    }
    std::cout<<std::endl;
    return 0;
}