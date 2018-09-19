int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int sign;
	int cpylength;
	
	cpylength = length; 
	sign = 0;
	while (--length > 0)
	{
		if (f (tab[length], tab[length - 1]) > 0)
			sign = 1;
		if (f (tab[length], tab[length - 1]) < 0)
			sign = -1;
		if (sign != 0)
			length = 0;
	}
	while (--cpylength > 0)
	{
		if ((f (tab[cpylength], tab[cpylength - 1]) * sign) < 0)
			return (0);
	}
	return (1);
}
