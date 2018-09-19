SRCPATH = ./

SRCFILES =	do_op \
			functions

TARGET = do-op

all:
	gcc -o $(TARGET) $(addsuffix .c,$(addprefix $(SRCPATH), $(SRCFILES)))
	
clean:
	rm -f $(addsuffix .o, $(SRCFILES))
	
fclean: clean
	rm -f $(TARGET)
	
re: fclean all
