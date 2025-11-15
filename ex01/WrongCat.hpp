#ifndef WRONGCAT_H
#define WRONGCAT_H
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
# include "WrongAnimal.hpp"



class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const std::string& type);
        WrongCat(const WrongCat &other);
        
        WrongCat& operator=(const WrongCat& other);
        void makeSound() const;
        ~WrongCat();
};

    
#endif