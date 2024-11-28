#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() : _name("Default")
{
    // std::cout << "Default Constructor Chara" << std::endl;
    for (int i = 0; i < 4; i++)
        _material[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
    // std::cout << "Constructor Chara" << std::endl;
    for (int i = 0; i < 4; i++)
        _material[i] = NULL;
}

Character::Character(const Character & other) : ICharacter(other)
{
    *_material = *other._material;
}

Character& Character::operator=(const Character & other)
{
    ICharacter::operator=(other);
    *_material = *other._material;
    return (*this);
}

Character::~Character()
{
    //std::cout << "Destructor Chara" << std::endl;
}

std::string const & Character::getName() const
{
    return (_name);
}

void Character::equip(AMateria* m)
{
    if (!m)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (_material[i] == NULL)
        {
            _material[i] = m;
            break ;
        }

    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
        return;
    _material[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3)
        return;
    if (_material[idx] != NULL)
        _material[idx]->use(target);
}