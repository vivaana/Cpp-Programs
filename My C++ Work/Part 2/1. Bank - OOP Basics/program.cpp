#include "library.h"
#include <iostream>

void Account::Shut(){
    std::cout << "Shutting bank...\n";
    std::cout << "\tAmount: " << this -> amount << "\n";
    std::cout << "\tInterest: "<< this -> interest << "\n";
    std::cout << "\tOpen date: "<< this -> openDate << "\n";
    std::cout << "\tBALANCE: " << amount << "\n";
}

void Account::addMoney(int money){
    std::cout << "ADDING £" << money << "!\n";
    this -> amount += money;
    std::cout << "\tBALANCE: " << amount << "\n";
}

void Account::withdraw(int money){
    std::cout << "WITHDRAWING £" << money << "!\n";
    this -> amount -= money;
    std::cout << "\tBALANCE: " << amount << "\n";
}

int main(){
    Account NameBecauseICannotBeBothered;
    NameBecauseICannotBeBothered.amount = 22;

    Account* otherMe = new Account();
    otherMe -> amount = 29;
    otherMe -> interest = 31147.2202;   
    otherMe -> openDate = "Jan2024";
    otherMe -> Shut();
    otherMe -> withdraw(17);
    otherMe -> addMoney(20);
}