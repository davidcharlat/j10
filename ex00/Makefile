SRCFILES =	./srcs/ft_putchar.c \
			./srcs/ft_putstr.c \
			./srcs/ft_strcmp.c \
			./srcs/ft_swap.c \
			./srcs/ft_strlen.c
			
OFILES =	./ft_putchar.o \
			./ft_putstr.o \
			./ft_strcmp.o \
			./ft_swap.o \
			./ft_strlen.o

all:
	gcc -c $(SRCFILES)
	ar rc libft.a $(OFILES)
	ranlib libft.a
	
clean:
	rm -f $(OFILES)
	
fclean: clean
	rm -f libft.a
	
re: fclean all
