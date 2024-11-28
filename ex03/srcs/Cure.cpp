#include "Cure.hpp"
//#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure")
{
   // std::cout << "constructor Cure" << std::endl;
}
Cure::Cure(const Cure & other) : AMateria(other)
{
}
Cure& Cure::operator=(const Cure & other)
{
    AMateria::operator=(other);
    return (*this);
}
Cure::~Cure()
{
    //std::cout << "destructor Cure" << std::endl;
}

Cure* Cure::clone() const
{
    return (new(Cure));
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << " is wounds *" << std::endl;
}