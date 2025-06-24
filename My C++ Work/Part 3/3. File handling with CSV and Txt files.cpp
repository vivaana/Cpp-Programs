#include <iostream>
#include <string>
#include <fstream>
#include <vector>

int main(){
    /*
    Text File

    std::ofstream file("data.txt", std::ios::out | std::ios::app);
    file << "Writing from a program!\n";
    file.close();*/

    

    std::ifstream file("data.csv", std::ios::in);
    std::string line;
    while(std::getline(file, line))
    {
        //std::cout << line << "\n";
        std::vector<std::string> parts;
        int index;
        while ((index = line.find(",")) !=  std:: string::npos){
            parts.push_back(line.substr(0,index));
            line.erase(0, index+1);
        }
        parts.push_back(line);

        for (int i = 0; i < parts.size(); i+=1){
            std::cout << parts[i] << " ";
        }
        std::cout << "\n";
    }
    file.close();

    return 0;
}

/*
std::string line;
std::getline(file, line)

std::string line;
while(std::getline(file, line))
{
    std::cout << line << "\n";
}

*/