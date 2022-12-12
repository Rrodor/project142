#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return(i);
}

void	*ft_memset(void *pointer, int value, size_t count)
{
	char *r;

	r = pointer;
	while (count > 0)
	{
		*r = value;
		r++;
		count--;
	}
	return (pointer);
}
