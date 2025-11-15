#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


int main(void)
{
    const int num = 10;
    const Animal* animals[num];

    for (int i = 0; i < num/2; i++)
        animals[i] = new Cat();
    for (int i = num/2; i < num; i++)
        animals[i] = new Dog();
    for (int i = 0; i < num; i++)
        animals[i]->makeSound();
    for (int i = 0; i < num; i++)
        delete animals[i];
    return 0;
}

