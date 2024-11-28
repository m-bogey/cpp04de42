#include "Dog.hpp"

Dog::Dog()
{
    _type = "Dog";
    std::cout << "Constructor Dog" << std::endl;
}

Dog::Dog(const Dog & other) : Animal(other)
{
    
}

Dog& Dog::operator=(const Dog & other)
{
    if (this != &other)
        Animal::operator=(other);
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Destructor Dog" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}
