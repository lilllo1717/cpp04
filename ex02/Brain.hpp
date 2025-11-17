#ifndef BRAIN_H
#define BRAIN_H
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



class Brain
{
    private:
        std::string _ideas[100];       

    public:
        Brain();
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        ~Brain();


        const std::string& getIdea(int index) const;
        void setIdea(int index, const std::string& idea);

};

    
#endif