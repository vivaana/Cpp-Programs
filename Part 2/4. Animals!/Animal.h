#pragma once
#include <string>

class Animal
{
    public:
        virtual std::string eat() = 0;
        virtual int getID();

    protected:
        std::string name;
        std::string species;
        int age;
};

class Dog : public Animal
{
    public:
        Dog(std::string name, std::string species, int age);
        virtual std::string eat() override;

    protected:
        std::string name;
        std::string species;
        int age;
};

class Bird : public Animal
{
    public:
        Bird(std::string name, std::string species, int age, std::string colour, bool likesToSing);
        virtual std::string eat() override;
        std::string sing();

    protected:
        std::string name;
        std::string species;
        int age;
        std::string colour;
        bool likesToSing;
};

class Identifiable
{
    public:
        virtual int getID() = 0;
};