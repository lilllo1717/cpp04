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
    Cat* cat1 = new Cat();
    cat1->getBrain()->setIdea(0, "I love fish.\n");
    std::cout << MAGENTA << cat1->getBrain()->getIdea(0) << RESET;
    for (int i = 0; i < num; i++)
        delete animals[i];
    delete cat1;
    return 0;
}

