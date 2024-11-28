#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{

const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

delete meta;
delete j;
delete i;

const WrongAnimal* wa = new WrongAnimal();
const WrongAnimal* ca = new WrongCat();

std::cout << wa->getType() << " " << std::endl;
std::cout << ca->getType() << " " << std::endl;
wa->makeSound();
ca->makeSound();

delete wa;
delete ca;

return 0;
}