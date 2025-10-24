/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-mal <kael-mal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 09:39:58 by kael-mal          #+#    #+#             */
/*   Updated: 2025/10/24 10:20:42 by kael-mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i] != 0)
// 		i++;
// 	return (i);
// }

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	len_s;
	char	*ret;

	i = 0;
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (NULL);
	if (len > len_s - start)
		ret = malloc(len_s - start + 1);
	else
		ret = malloc(len + 1);
	if (!ret)
		return (NULL);
	while (s[start] && i < len)
	{
		ret[i] = s[start];
		i++;
		start++;
	}
	ret[i] = '\0';
	return (ret);
}
