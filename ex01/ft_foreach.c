void	ft_foreach(int *tab, int length, void (*f)(int))
{
	/*
	** Let's consider that "length" is the size of "tab"
	** Given that tab's values don't have to be taken from 0 
	*/
	while (length > 0)
		f(tab[--length]);
}
