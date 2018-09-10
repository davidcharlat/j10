SRCPATH = ./srcs/

SRCFILES =	ft_putchar \
			ft_putstr \
			ft_strcmp \
			ft_swap \
			ft_strlen

all:
	gcc -c $(addsuffix .c,$(addprefix $(SRCPATH), $(SRCFILES)))
	ar rc libft.a $(addsuffix .o, $(SRCFILES))
	ranlib libft.a
	
clean:
	rm -f $(addsuffix .o, $(SRCFILES))
	
fclean: clean
	rm -f libft.a
	
re: fclean all
