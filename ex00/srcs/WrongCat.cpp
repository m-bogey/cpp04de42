#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    _type = "WrongCat";
    std::cout << "Constructor WrongCat" << std::endl;
}

WrongCat::WrongCat(const WrongCat & other) : WrongAnimal(other)
{
    
}

WrongCat& WrongCat::operator=(const WrongCat & other)
{
    if (this != &other)
        WrongAnimal::operator=(other);
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor WrongCat" << std::endl;
}

void WrongCat::makeSound() const 
{
    std::cout << "Miaou" << std::endl;
}
