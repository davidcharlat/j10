void	ft_advanced_sort_wordtab (char **tab, int (*cmp)(char*, char*))
{
	int		i;
	int 	j;
	char	*temp;
	
	i = 0;
	while (tab[i] && tab[++i])
	{
		j = 0;
		while (tab[j] && tab[j + 1])
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
			{
				temp = *(tab + j);
				*(tab + j) = *(tab + j + 1);
				*(tab + j + 1) = temp;
			}
			j++;
		}
	}
}
