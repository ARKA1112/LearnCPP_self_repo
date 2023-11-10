#include <iostream>
#include "add.h"
//int add(int x, int y); not required when add.h
//no need to define a separate add.cpp
int main()
{
    std::cout<<"The sum of 3 and 4 is"<< add(3,4); //still the compiler will fail
}