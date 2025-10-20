#include "libft.h"

void	*memmove(void *destination, const void *source, size_t size)
{
	size_t	i;
	unsigned char	*dst;
	const unsigned char	*src;

	dst = (unsigned char *)destination;
	src = (const unsigned char *)source;
	i = 0;
	if (dst < src)
	{
		while (i < size)
		{
			dst[i] = src[i];
			i++;
		}
	}
	else
	{
		size = size - 1;
		while (size > 0)
		{
			dst[size] = src[size];
			size--;
		}
		dst[0] = src[0];
	}
	return (destination);
}
