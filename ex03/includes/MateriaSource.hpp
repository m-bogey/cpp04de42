#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria**  _deleteManagerMateria;
        int         _createdCount;
        int         _createdCapacity;
        void        deleteCreatedMaterias();
        void        expandCreatedMaterias();
        AMateria*   _materiaSrc[4];

    public:
        MateriaSource();
        MateriaSource(const MateriaSource & other);
        MateriaSource& operator=(const MateriaSource & other);
        ~MateriaSource();
        void learnMateria(AMateria* mat);
        AMateria* createMateria(std::string const & type);
};

#endif