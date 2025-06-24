#include "libraryL4.h"
#include <iostream>
#include <string>

User::User(std::string username, std::string password){
    this->username = username;
    this->password = password;
}

void User::outputInformation(){
    std::cout << this->username << " is the username!\n";
    std::cout << this->password << " is the password!";
}

void User::login(std::string enteredUsername, std::string enteredPassword){
    if (enteredUsername == this->username && enteredPassword == this-> password){
        std::cout << "User access granted!\n";
    } else if (enteredUsername == this->username && enteredPassword != this-> password){
        std::cout << "Either your username or password is incorrect!\n";
    } else if (enteredUsername != this->username && enteredPassword == this-> password){
        std::cout << "Either your username or password is incorrect!\n";
    } else{
        std::cout << "Access denied\n";
    }
}

Admin::Admin(std::string username, std::string password):User(username, password){
    
}

void Admin::outputInformation(){
    std::cout << username << " is the username!\n";
    std::cout << "[PASSWORD HIDDEN]";
}

int main(){
    Admin VivTheUser("USER01", "ABC123");
    VivTheUser.outputInformation();
    VivTheUser.login("USER01", "ABC123");
    Admin VivTheAdmin("QuackQuackViv", "ABC123");
    VivTheAdmin.outputInformation();
}