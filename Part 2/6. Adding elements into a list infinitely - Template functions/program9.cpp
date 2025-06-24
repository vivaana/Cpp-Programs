#include "library9.h"
#include <iostream>

int main()
{
    std::string* names = makeArray<std::string>(10);
    for (int i = 0; i < 10; ++i){
        std::cout << "Name " << i+1 << ": " << names[i+1] << std::endl;
    }
}