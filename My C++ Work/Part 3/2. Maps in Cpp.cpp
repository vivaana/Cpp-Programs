#include <map>
#include <string>
#include <iostream>

int main(){
    std::map<int, std::string> VivsMap;
    VivsMap[0] = "Hello";
    VivsMap[1] = "World";
    VivsMap[2] = "how";
    VivsMap[3] = "are";
    VivsMap[4] = "you?";

    for (auto const &pair:VivsMap){
        std::cout << "• Key: "<< pair.first << " | Value: " << pair.second << "\n";
    }

    return 0;
}