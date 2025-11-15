#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
    :   _type("")
{
    std::cout << GREEN << "WrongAnimal default Constructor called.\n";
    std::cout << RESET;
}

WrongAnimal::WrongAnimal(const std::string& type)
    :   _type(type)
{
    std::cout << GREEN << "Constructor called.\n";
    std::cout << GREEN << "Our new player is " << type << ".\n";
    std::cout << RESET;
}

WrongAnimal::~WrongAnimal() 
{
    std::cout << RED <<  "Destructor called.\n";
    std::cout << RESET;
}

const std::string& WrongAnimal::getType() const
{
    return this->_type;
}

void WrongAnimal::makeSound() const
{
    std::cout << YELLOW <<  "WrongAnimal sound~~\n";
    std::cout << RESET;

}
