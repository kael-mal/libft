/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-mal <kael-mal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:10:42 by kael-mal          #+#    #+#             */
/*   Updated: 2025/10/24 11:57:41 by kael-mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	flag;
	char	*ret;

	i = -1;
	k = 0;
	ret = malloc(ft_strlen(s1) + 1);
	if (!ret)
		return (NULL);
	while (s1[++i])
	{
		j = 0;
		flag = 0;
		while (set[j])
		{
			if (s1[i] == set[j++])
				flag = 1;
		}
		if (!flag)
			ret[k++] = s1[i];
	}
	ret[k] = '\0';
	return (ret);
}
