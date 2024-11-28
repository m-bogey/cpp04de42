#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
    std::cout << "Constructor WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & other) : _type(other._type)
{
    
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal & other)
{
    if (this != &other)
        _type = other._type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor WrongAnimal" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Vous etes des animaux" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (_type);
}

