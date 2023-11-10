#include <iostream>
#include <string>
int getUserInput(){
    std::cout<<"Enter a number";
    int input{};
    std::cin>>input;

    return input;
}

int getMathematicalOperation(){
    std::cout<<"Enter add, sub, mul, div";
    std::string sign;
    std::cin>>sign;
    return 0;
}

int main()
{
    int value{getUserInput()};

    std::cout<<value<<'\n';

    return 0;
}