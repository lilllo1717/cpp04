#include "Animal.hpp"


Animal::Animal()
    :   _type("")
{
    std::cout << GREEN << "Animal default Constructor called.\n";
    std::cout << RESET;
}

Animal::Animal(const std::string& type)
    :   _type(type)
{
    std::cout << GREEN << "Constructor called.\n";
    std::cout << GREEN << "Our new player is " << type << ".\n";
    std::cout << RESET;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << GREEN << "Animal copy assignment operator called.\n" << RESET;
    _type = other._type;
    return *this;
}

Animal::~Animal() 
{
    std::cout << RED <<  "Destructor called.\n";
    std::cout << RESET;
}

const std::string& Animal::getType() const
{
    return this->_type;
}

void Animal::makeSound() const
{
    std::cout << YELLOW <<  "Animal sound~~\n";
    std::cout << RESET;

}
