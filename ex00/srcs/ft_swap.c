void	ft_swap (int *a, int *b)
{
	int a_mem;

	a_mem = *a;
	*a = *b;
	*b = a_mem;
}
