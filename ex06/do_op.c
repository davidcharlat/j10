#include <unistd.h>

int	add(int n1, int n2);
int	sub(int n1, int n2);
int	mul(int n1, int n2);
int	div(int n1, int n2);
int	mod(int n1, int n2);

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

int 	calculate_result (int (**f)(int, int), int a, int b, char *av2)
{
	int result;
	
	result = 0;
	if ( av2[0] == '+' )
		result = f[0](a, b);
	else if ( av2[0] == '-' )
		result = f[1](a, b);
	else if ( av2[0] == '*' )
		result = f[2](a, b);
	else if ( av2[0] == '/' )
		result = f[3](a, b);
	else if ( av2[0] == '%' )
		result = f[4](a, b);
	return (result);
}

int		main (int ac, char **av)
{
	int	a;
	int	b;
	int	(*f[5])(int, int);
	
	f[0] = &add;
	f[1] = &sub;
	f[2] = &mul;
	f[3] = &div;
	f[4] = &mod;
	if ( ac != 4 )
		return (0);
	if (av[2][1])
		return (write (1, "0\n", 2));
	a = numerize_av (av[1]);
	b = numerize_av (av[3]);
	if (( av[2][0] == '/' ) && (b == 0) && (av[2][1] == 0))
		return (write (1, "stop : division by zero\n", 24));
	if (( av[2][0] == '%' ) && (b == 0) && (av[2][1] == 0))
		return (write (1, "stop : modulo by zero\n", 22));
	iputnb (calculate_result (f, a, b, av[2]));
	write (1, "\n", 1);
	return (0);	
}
