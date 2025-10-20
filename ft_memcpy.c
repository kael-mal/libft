#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
