#pragma once
#include <string>


class Account
{
    public:
        int amount;
        double interest;
        std::string openDate;
        void addMoney(int money);
        void withdraw(int money);
        void Shut();
};