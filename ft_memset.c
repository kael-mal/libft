#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	int	i;

	i = 0;
	while (i < count)
		pointer[i++] = value;
	return (pointer);
}
