#include "Animal.hpp"
#include "Cat.hpp"


Cat::Cat()
{
    _type = "Cat";
    std::cout << GREEN << "Cat default Constructor called.\n";
    std::cout << RESET;

}

Cat::Cat(const std::string& type)
{
    _type = type;
    std::cout << GREEN << "Cat Constructor called.\n";
    std::cout << GREEN << "Our animal type is " << type << ".\n";
    std::cout << RESET;
}

Cat::Cat(const Cat &other)
{
    *this = other;
    std::cout << GREEN << "Cat Copy constructor called.\n";
    std::cout << RESET;

}

Cat& Cat::operator=(const Cat& other)
{
    _type = other._type;
    std::cout << GREEN << "Cat Copy assignment constructor called.\n";
    std::cout << RESET;
    return (*this);

}


void Cat::makeSound() const
{
    std::cout << YELLOW <<  "Miau Miau ~~~~\n";
    std::cout << RESET;

    
}

Cat::~Cat() 
{
    std::cout << RED <<  "Cat Destructor called.\n";
    std::cout << RESET;
}