PROG = PhoneBook

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =  PhoneBook.cpp Contact.cpp main.cpp

OBJ = $(SRC:.cpp=.o)
  
NAME = $(PROG)

all : $(NAME)

$(PROG) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(PROG) 
	

clean : 
	rm -rf $(OBJ) 

fclean : clean
	rm -rf $(NAME)

re : fclean all

.SECONDARY: $(OBJ) 