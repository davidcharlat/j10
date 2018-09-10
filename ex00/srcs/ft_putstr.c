int		ft_putchar(char c);

void	ft_putstr (char *str)
{
	int cursor;

	cursor = 0;
	
	while (*(str + cursor) != '\0')
	{
		ft_putchar (*(str + cursor++));
	}
}
