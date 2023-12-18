NAME = horde

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

CXX= cc

SRCS  = main.cpp Zombie.cpp zombieHorde.cpp\

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME) -lstdc++

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -fr $(NAME)

re : fclean all
