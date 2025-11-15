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
