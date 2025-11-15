#ifndef ANIMAL_H
#define ANIMAL_H
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



class Animal
{
    protected:
        std::string _type;       

    public:
        Animal();
        Animal(const std::string& type);
        virtual ~Animal();

        Animal& operator=(const Animal& other);

        const std::string& getType() const;
        virtual void makeSound() const;
};

    
#endif