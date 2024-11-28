#include "Cat.hpp"

Cat::Cat()
{
    _type = "Cat";
    std::cout << "Constructor Cat" << std::endl;
}

Cat::Cat(const Cat & other) : Animal(other)
{
    
}

Cat& Cat::operator=(const Cat & other)
{
    if (this != &other)
        Animal::operator=(other);
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Destructor Cat" << std::endl;
}

void Cat::makeSound() const 
{
    std::cout << "Miaou" << std::endl;
}
