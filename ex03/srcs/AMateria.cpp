#include "AMateria.hpp"

AMateria::AMateria() : type("default")
{
   // std::cout << "default constructor AMateria" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type)
{
    //std::cout << "constructor AMateria" << std::endl;
}
AMateria::AMateria(const AMateria & other)
{
    *this = other;
}
AMateria& AMateria::operator=(const AMateria & other)
{
    (void)other;
    return (*this);
}
AMateria::~AMateria()
{
    // std::cout << "destructor AMateria" << std::endl;
}

std::string const & AMateria::getType() const
{
    return (type);
}

void AMateria::use(ICharacter& target) {
    std::cout << "* does nothing to " << target.getName() << " *" << std::endl;
}