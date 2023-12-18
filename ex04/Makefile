NAME = Sed

CXX= c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS  = main.cpp sed.cpp\

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -fr $(NAME)

re : fclean all
