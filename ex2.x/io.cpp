#include "io.h"
#include <iostream>

int readNumber(){
    std::cout<<"Enter and integer";
    int value{};
    std::cin>>value;
    return value;
}

void writeAnswer(int numb){
    std::cout<<"The number is "<<numb;
}