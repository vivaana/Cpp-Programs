#include <iostream>
#include <string>
#pragma once

class TO_BE_DESTRUCTED{
    std::string password;
    
    public:
        TO_BE_DESTRUCTED(std::string passcode);
        ~TO_BE_DESTRUCTED();

};