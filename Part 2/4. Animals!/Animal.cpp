#include "Animal.h"
#include <iostream>

//DOG
Dog :: Dog(std::string name, std::string species, int age)
{
    this -> name = name;
    this -> species = species;
    this -> age = age;
}

std::string Dog :: eat()
{
    return this->name + " is eating some dog food.";
}


//BIRD
Bird :: Bird(std::string name, std::string species, int age, std::string colour, bool likesToSing)
{
    this -> name = name;
    this -> species = species;
    this -> age = age;
    this -> colour = colour;
    this -> likesToSing = likesToSing;
}

std::string Bird :: eat()
{
    return this->name + " is eating some kernels.";
}

std::string Bird :: sing()
{
    if (this->likesToSing == true){
        return "🎶🎶🎶🎶🎶🎶🎶 la la la 🎶🎶🎶🎶🎶🎶🎶";
    } else{
        return "🤮🤮🤮🤮🤮🤮🤮🤮🤮🤮🤮";
    }
}

//returns int
//animal
//getID

int Animal :: getID(){
    return (this->name).size();
}

int main()
{
    Dog myDog("Skippy", "Labrador", 7);
    std::cout << myDog.eat() << "\n";
    Bird myBird("Tweety", "Canary", 4, "yellow", true);
    std::cout << myBird.eat() << "\n";
    std::cout << myBird.sing() << "\n";
    std::cout << myDog.getID() << "\n";
}