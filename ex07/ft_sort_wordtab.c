int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (!*s1)
			return (0);
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

void	ft_sort_wordtab (char **tab)
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
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				temp = *(tab + j);
				*(tab + j) = *(tab + j + 1);
				*(tab + j + 1) = temp;
			}
			j++;
		}
	}
}
