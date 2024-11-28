#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Constructor Brain" << std::endl;
    
}
Brain::Brain(const Brain & other)
{
    std::cout << "Constructor param Brain" << std::endl;
    
    for (int i = 0; i < 100; i++)
        ideas[i] = other.ideas[i];
}
Brain& Brain::operator=(const Brain & other)
{
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = other.ideas[i];
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Destructor Brain" << std::endl;
}