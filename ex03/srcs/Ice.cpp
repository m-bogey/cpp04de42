#include "Ice.hpp"
//#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice")
{
    //std::cout << "constructor Ice" << std::endl;
}
Ice::Ice(const Ice & other) : AMateria(other)
{
}
Ice& Ice::operator=(const Ice & other)
{
    AMateria::operator=(other);
    return (*this);
}
Ice::~Ice()
{
    //std::cout << "destructor Ice" << std::endl;
}

Ice* Ice::clone() const
{
    return (new(Ice));
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}