#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*tab_fn;
	
	tab_fn = (int*)malloc(sizeof (int) * length);
	if (tab_fn == NULL)
		return (NULL);
	while (length > 0)
		tab_fn[--length] = f(tab[length]);
	return (tab_fn);
}
