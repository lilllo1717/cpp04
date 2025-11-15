#include "Animal.hpp"
#include "Dog.hpp"


Dog::Dog()
{
    _type = "Dog";
    std::cout << GREEN << "Dog default Constructor called.\n";
    std::cout << RESET;
}

Dog::Dog(const std::string& type)
{
    _type = type;
    std::cout << GREEN << "Dog Constructor called.\n";
    std::cout << GREEN << "Our animal type is " << type << ".\n";
    std::cout << RESET;
}



Dog::Dog(const Dog &other)
{
    *this = other;
    std::cout << GREEN << "Dog Copy constructor called.\n";
    std::cout << RESET;

}

Dog& Dog::operator=(const Dog& other)
{
    _type = other._type;
    std::cout << GREEN << "Dog Copy assignment constructor called.\n";
    std::cout << RESET;
    return (*this);

}

void Dog::makeSound() const
{
    std::cout << YELLOW <<  "Uaf Uaf~~~~\n";
    std::cout << RESET;


}

Dog::~Dog() 
{
    std::cout << RED <<  "Dog Destructor called.\n";
    std::cout << RESET;
}