#include "MateriaSource.hpp"
#include <cstring>

MateriaSource::MateriaSource() : _createdCount(0), _createdCapacity(10)
{
    for (int i = 0; i < 4; i++)
    {
            _materiaSrc[i] = NULL;
    }
    _deleteManagerMateria = new AMateria*[_createdCapacity];
}

MateriaSource::MateriaSource(const MateriaSource & other) : IMateriaSource(other)
{}

MateriaSource& MateriaSource::operator=(const MateriaSource & other)
{
    IMateriaSource::operator=(other);
    return (*this);
}

MateriaSource::~MateriaSource()
{
    deleteCreatedMaterias();
    for (int i = 0; i < 4; ++i)
    {
        delete _materiaSrc[i];
    }
}

void MateriaSource::learnMateria(AMateria* mat)
{
    for (int i = 0; i < 4; i++)
    {
        if (_materiaSrc[i] == NULL)
        {
            _materiaSrc[i] = mat;
            return;
        }
    }
    delete mat;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    AMateria* tmp;

    for (int i = 3; i >= 0; i--)
    {
        if (_materiaSrc[i] != NULL && type == _materiaSrc[i]->getType())
        {
            tmp = _materiaSrc[i]->clone();

            // verifier taille et augmenter si necessaire
            if (_createdCount >= _createdCapacity)
                expandCreatedMaterias();
            // add clone au deleteManager
            _deleteManagerMateria[_createdCount] = tmp;
            _createdCount++;
            return (tmp);
        }
    }
    return 0;
}

void    MateriaSource::expandCreatedMaterias()
{
    _createdCapacity *= 2;
    AMateria** newDeleteManager = new AMateria*[_createdCapacity];
    // pensez a recopier ce qui existe dans le tableau
    for (int i = 0; i < _createdCount; i++)
        newDeleteManager[i] = _deleteManagerMateria[i];
    //supprimer l'ancien tableau
    delete[] _deleteManagerMateria;

    _deleteManagerMateria = newDeleteManager;
}

void    MateriaSource::deleteCreatedMaterias()
{
    for (int i = 0; i < _createdCount; i++)
    {
        delete _deleteManagerMateria[i];
    }
        delete[] _deleteManagerMateria;
    _deleteManagerMateria = NULL;
    _createdCount = 0;
    _createdCapacity = 0;
}