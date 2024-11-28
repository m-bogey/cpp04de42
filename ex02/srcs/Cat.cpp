#include "Cat.hpp"

Cat::Cat()
{
    _type = "Cat";
    _br = new Brain();
    std::cout << "Constructor Cat" << std::endl;
}

Cat::Cat(const Cat & other) : Animal(other), _br(new Brain(*other._br))
{
    
}

Cat& Cat::operator=(const Cat & other)
{
    Animal::operator=(other);
    *_br = *other._br; // copie profonde du Brain
    return (*this);
}

Cat::~Cat()
{
    delete _br;
    std::cout << "Destructor Cat" << std::endl;
}

void Cat::makeSound() const 
{
    std::cout << "Miaou" << std::endl;
}
