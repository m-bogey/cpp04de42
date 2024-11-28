#include "Animal.hpp"

Animal::Animal() : _type("animal")
{
    std::cout << "Constructor Animal" << std::endl;
}

Animal::Animal(const Animal & other) : _type(other._type)
{
    std::cout << "Constructor param Animal" << std::endl;
}

Animal& Animal::operator=(const Animal & other)
{
    if (this != &other)
        _type = other._type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Destructor Animal" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Vous etes des animaux" << std::endl;
}

std::string Animal::getType() const
{
    return (_type);
}

