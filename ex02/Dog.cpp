#include "Animal.hpp"
#include "Dog.hpp"


Dog::Dog()
    : Animal("Dog"), _brain(new Brain())
{
    std::cout << GREEN << "Dog default Constructor called.\n";
    std::cout << RESET;
}

Dog::Dog(const std::string& type)
    : Animal(type), _brain(new Brain())
{
    std::cout << GREEN << "Dog Constructor called.\n";
    std::cout << GREEN << "Our animal type is " << type << ".\n";
    std::cout << RESET;
}

Dog::Dog(const Dog &other)
    :Animal(other)
{
    std::cout << GREEN << "Dog Copy constructor called.\n";
    std::cout << RESET;
    _brain = new Brain(*other._brain);

}

Dog& Dog::operator=(const Dog& other)
{

    std::cout << GREEN << "Dog Copy assignment constructor called.\n";
    std::cout << RESET;
    if (this != &other)
    {
        Animal::operator=(other);
        delete _brain;
        _brain = new Brain(*other._brain);
    }
    return (*this);
}

Dog::~Dog() 
{
    delete _brain;
    std::cout << RED <<  "Dog Destructor called.\n";
    std::cout << RESET;
}

void Dog::makeSound() const
{
    std::cout << YELLOW <<  "Uaf Uaf~~~~\n";
    std::cout << RESET;
    
}
