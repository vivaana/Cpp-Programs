#include "alibrary.h"
#include <iostream>
#include <string>

TO_BE_DESTRUCTED::TO_BE_DESTRUCTED(std::string passcode){
    this->password = passcode;
}

TO_BE_DESTRUCTED::~TO_BE_DESTRUCTED(){
    std::cout << "DESTRUCTION!";
}

void functy(int& thingy){
    thingy += 1;
    std::cout << thingy;
}

int main(){
    int meow = 10;
    functy(meow);
    TO_BE_DESTRUCTED test("happy");
}