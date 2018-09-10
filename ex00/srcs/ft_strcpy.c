char	*ft_strcpy(char *dest, char *src)
{
	int cursor;

	cursor = 0;
	while (src[cursor] != '\0')
		dest[cursor] = src[cursor++];
	dest[cursor] = '\0';
	return (dest);
}
