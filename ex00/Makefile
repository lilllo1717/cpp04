
CXX       = c++
CXXFLAGS  = -Wall -Wextra -Werror 

SRC       = main.cpp Cat.cpp WrongCat.cpp  Dog.cpp Animal.cpp WrongAnimal.cpp
OBJ_DIR   = obj
OBJ       = $(SRC:%.cpp=$(OBJ_DIR)/%.o)
DEPS      = $(OBJ:.o=.d)

NAME      = ex00

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -f $(OBJ) $(DEPS)

fclean: clean
	rm -f $(NAME)
	rm -rf $(OBJ_DIR)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re
