#include <unistd.h>

int		ft_usage(int n1, int n2)
{
	write(1, "error : only [ - + * / % ] are accepted.", 40);
	return (n1 + n2);
}
