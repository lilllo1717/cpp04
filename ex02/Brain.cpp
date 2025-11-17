#include "Brain.hpp"


Brain::Brain()
{
    std::cout << GREEN << "Brain default Constructor called.\n";
    std::cout << RESET;
    for (int i = 0; i < 100; i++)
        _ideas[i] = "";
}

Brain::Brain(const Brain& other)
{
    std::cout << GREEN << "Brain copy constructor called.\n";
    std::cout << RESET;
    *this = other;
}

Brain& Brain::operator=(const Brain& other)
{
    std::cout << GREEN << "Brain copy assignment operator called.\n";
    std::cout << RESET;
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            _ideas[i] = other._ideas[i];
    }
    return (*this);
}

Brain::~Brain() 
{
    std::cout << RED <<  "Breain destructor called.\n";
    std::cout << RESET;
}

const std::string& Brain::getIdea(int index) const
{
    static const std::string tmp;

    if (index >= 0 && index < 100)
        return _ideas[index];
    else
    {
        std::cout << RED <<  "Index out of range.\n" << RESET;
        return tmp;
    }

}

void Brain::setIdea(int index, const std::string& idea)
{
    if (index >= 0 && index < 100)
        _ideas[index] = idea;
    else
        std::cout << RED <<  "Index out of range.\n" << RESET;
}

