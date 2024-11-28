#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
    int nbAnimals = 5;
    int i = 0;
    
    const Animal* animals[nbAnimals];
    while (i < nbAnimals / 2)
    {
        animals[i] = new Cat();
        i++;
    }
    while (i < nbAnimals)
    {
        animals[i] = new Dog();
        i++;
    }
    i = 0;
    while (i < nbAnimals)
    {
        delete animals[i];
        i++;
    }

    return 0;
}