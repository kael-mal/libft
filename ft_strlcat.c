
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = -1;
	if (dst_len >= size)
		return (src_len + size);
	while (++i < size - dst_len - 1 && src[i])
		dst[dst_len + i] = (src)[i];
	dst[dst_len + i] = '\0';
	return (src_len + dst_len);
}