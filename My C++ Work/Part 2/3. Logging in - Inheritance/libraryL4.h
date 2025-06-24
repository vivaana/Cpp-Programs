#include <iostream>
#include <string>
#pragma once

class User{
    protected:
        std::string username;
        std::string password;
    public:
        User(std::string username, std::string password);

        virtual void outputInformation();
        void login(std::string username);
        void login(std::string username, std::string password);
};

class Admin: public User{
    public:
        Admin(std::string username, std::string password);
        virtual void outputInformation();
};