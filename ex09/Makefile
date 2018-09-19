SRCPATH = ./

SRCFILES =	advanced_do_op \
			functions \
			ft_usage

TARGET = ft_advanced_do-op

all:
	gcc -o $(TARGET) $(addsuffix .c,$(addprefix $(SRCPATH), $(SRCFILES)))
	
clean:
	rm -f $(addsuffix .o, $(SRCFILES))
	
fclean: clean
	rm -f $(TARGET)
	
re: fclean all
