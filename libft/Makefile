
FLAGS = -Wall -Wextra -Werror
NAME = libft.a

SRC = ./*.c

INCLUDE = ./libft.h

OBJ = $(SRC:.c=.o)

OBJBONUS = $(SRCBONUS:.c=.o)

all : $(NAME)
$(NAME) : $(OBJ) $(INCLUDE)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

%.o : %.c
	gcc $(FLAGS) -c -o $@ $<

clean : 
	@rm -rf *.o

fclean : clean
	@rm -rf $(NAME)
	@rm -rf libft.so

re: fclean all

so:
	gcc -c -fPIC ft_*.c
	gcc -shared -o libft.so ft_*.o

