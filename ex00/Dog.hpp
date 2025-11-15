#ifndef DOG_H
#define DOG_H
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

# include <iostream>
# include <iomanip>
# include <cmath>
# include "Animal.hpp"



class Dog : public Animal
{
    public:
        Dog();
        Dog(const std::string& type);
        Dog(const Dog &other);
        
        Dog& operator=(const Dog& other);
        void makeSound() const override;
        virtual ~Dog();

};

    
#endif