#include "io.h"
#include <iostream>




// int readNumber(){
//     std::cout<<"Enter an Integer";
//     int value{};
//     std::cin>>value;
//     return value;
// }


// void writeAnswer(int numb){
//     std::cout<<"The answer is: "<<numb;
// }


int main(){
    int num1{readNumber()};
    int num2{readNumber()};
    int num{num1+num2};
    writeAnswer(num);
    return 0;
}