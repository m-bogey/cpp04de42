#include "Dog.hpp"

Dog::Dog()
{
    _type = "Dog";
    _br = new Brain();
    std::cout << "Constructor Dog" << std::endl;
}

Dog::Dog(const Dog & other) : Animal(other), _br(new Brain(*other._br))
{
    
}

Dog& Dog::operator=(const Dog & other)
{
    Animal::operator=(other);
    *_br = *other._br;
    return (*this);
}

Dog::~Dog()
{
    delete _br;
    std::cout << "Destructor Dog" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}
