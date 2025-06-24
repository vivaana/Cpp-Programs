#include <iostream>
#include <string>

int main(){
    
    try{
        int num;
        std::cin >> num;
        if(std::cin.fail()){
            throw std::runtime_error("HOW DARE YOU! ");
        }
    }
    
    catch(const std::exception& e){
        std::cerr << e.what() << "\n";
    }

    return 0;
}