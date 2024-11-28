#include "ICharacter.hpp"

ICharacter::ICharacter()
{
    // std::cout << "Constructor IChara" << std::endl;
}

ICharacter::ICharacter(const ICharacter & other)
{
    *this = other;
}

ICharacter& ICharacter::operator=(const ICharacter & other)
{
    if (this != &other)
        *this = other;
    return (*this);
}

ICharacter::~ICharacter()
{
    // std::cout << "Destructor IChara" << std::endl;
}
