#include <unistd.h>
#include "depend.h"
#include "ft_opp.h"

int		iputnb (int nb)
{
	int 	sign;
	int 	abs_nb;
	char	digit;
	
	sign = 1;
	if (nb < 0)
	{
		sign = -1;
		write (1, "-", 1);
	}
	abs_nb = sign * nb;
	if (abs_nb >= 10)
	{
		iputnb (abs_nb / 10);
		iputnb (abs_nb % 10);
	}
	else
	{
		digit = ('0' + abs_nb);
		write (1, &digit, 1);
	}
	return (0);
}

int		numerize_av (char *str)
{
	int cursor;
	int sign;
	int nb;
	
	nb = 0;
	sign = 0;
	if (str[0] == '-')
		sign = 1;
	cursor = sign;
	while (str[cursor] >= '0' && str[cursor] <= '9')
		nb = nb * 10 + str[cursor++] - '0';
	if (sign)
		nb = -nb;
	return (nb);
}

int 	calculate_result (t_opp *g_oppt, int a, int b, char *av2)
{
	int	i;
	
	i = 0;
	while (i < 5)
	{
		if (((g_oppt[i].opp)[0] == av2[0]) && (av2[1] == 0))
			return ((g_oppt[i].ft)(a, b));
		i++;
	}
	return ((g_oppt[5].ft)(a, b));
}

int		main (int ac, char **av)
{
	int	a;
	int	b;

	if ( ac != 4 )
		return (0);
	a = numerize_av (av[1]);
	b = numerize_av (av[3]);
	if ((av[2][0] == '/') && (b == 0) && (av[2][1] == 0))
		return (write (1, "stop : division by zero\n", 24));
	if ((av[2][0] == '%') && (b == 0) && (av[2][1] == 0))
		return (write (1, "stop : modulo by zero\n", 22));
	if (((av[2][0] == '/') || (av[2][0] == '-') || (av[2][0] == '*') 
			|| (av[2][0] == '+') || (av[2][0] == '%')) 
		&& (av[2][1] == 0))
	{
		iputnb (calculate_result (g_opptab, a, b, av[2]));
		write (1, "\n", 1);
		return (0);
	}
	calculate_result (g_opptab, a, b, av[2]);
	return (0);
}
