#include "Animal.hpp"
#include "WrongCat.hpp"


WrongCat::WrongCat()
{
    _type = "WrongCat";
    std::cout << GREEN << "WrongCat default Constructor called.\n";
    std::cout << RESET;

}

WrongCat::WrongCat(const std::string& type)
{
    _type = type;
    std::cout << GREEN << "WrongCat Constructor called.\n";
    std::cout << GREEN << "Our animal type is " << type << ".\n";
    std::cout << RESET;
}

WrongCat::WrongCat(const WrongCat &other)
{
    *this = other;
    std::cout << GREEN << "WrongCat Copy constructor called.\n";
    std::cout << RESET;

}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    _type = other._type;
    std::cout << GREEN << "WrongCat Copy assignment constructor called.\n";
    std::cout << RESET;
    return (*this);

}


void WrongCat::makeSound() const
{
    std::cout << YELLOW <<  "Miau Miau ~~~~\n";
    std::cout << RESET;

    
}

WrongCat::~WrongCat() 
{
    std::cout << RED <<  "WrongCat Destructor called.\n";
    std::cout << RESET;
}