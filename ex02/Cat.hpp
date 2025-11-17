#ifndef CAT_H
#define CAT_H
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
# include "Brain.hpp"




class Cat : public Animal
{
    private:
        Brain* _brain;
    public:
        Cat();
        Cat(const std::string& type);
        Cat(const Cat &other);
        
        Cat& operator=(const Cat& other);
        void makeSound() const override;
        virtual ~Cat();
        Brain* getBrain();


};

    
#endif