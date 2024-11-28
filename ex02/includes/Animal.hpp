#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
    public:
        Animal();
        Animal(const Animal & other);
        Animal& operator=(const Animal & other);
        virtual ~Animal();

        virtual void makeSound() const = 0; // Methode virtuelle pure : rend la classe abstraite
        std::string getType() const;

    protected:
        std::string _type;
};

#endif