#include "Animal.hpp"
#include "Cat.hpp"


Cat::Cat()
    : Animal("Cat"), _brain(new Brain())
{
    std::cout << GREEN << "Cat default Constructor called.\n";
    std::cout << RESET;
}

Cat::Cat(const std::string& type)
    : Animal(type), _brain(new Brain())
{
    std::cout << GREEN << "Cat Constructor called.\n";
    std::cout << GREEN << "Our animal type is " << type << ".\n";
    std::cout << RESET;
}

Cat::Cat(const Cat &other)
    :Animal(other)
{
    std::cout << GREEN << "Cat Copy constructor called.\n";
    std::cout << RESET;
    _brain = new Brain(*other._brain);

}

Cat& Cat::operator=(const Cat& other)
{

    std::cout << GREEN << "Cat Copy assignment constructor called.\n";
    std::cout << RESET;
    if (this != &other)
    {
        Animal::operator=(other);
        delete _brain;
        _brain = new Brain(*other._brain);
    }
    return (*this);
}

Brain* Cat::getBrain()
{
    return _brain;
}

void Cat::makeSound() const
{
    std::cout << YELLOW <<  "Miau Miau ~~~~\n";
    std::cout << RESET;

    
}

Cat::~Cat() 
{
    delete _brain;
    std::cout << RED <<  "Cat Destructor called.\n";
    std::cout << RESET;
}