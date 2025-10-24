/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-mal <kael-mal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:00:15 by kael-mal          #+#    #+#             */
/*   Updated: 2025/10/24 12:48:37 by kael-mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_split(char const *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	len;

	i = 0;
	ret = malloc(sizeof(char **) * 3);
	while (s[i] && s[i] != c)
		i++;
	len = i;
	i = -1;
	ret[0] = malloc(len + 1);
	if (!ret[0])
		return (NULL);
	while (s[i] && s[++i] != c)
		ret[0][i] = s[i];
	ret[0][i] = '\0';
	ret[1] = malloc(ft_strlen(s) - len + 1);
	if (!ret[1])
		return (NULL);
	i = 0;
	while (s[++len])
		ret[1][i++] = s[len];
	ret[1][i] = '\0';
	ret[2] = NULL;
	return (ret);
}

int	main(void)
{
	char	**ret;

	ret = ft_split("heol", 'x');
	printf("%s\n", ret[0]);
	printf("%s\n", ret[1]);
	// printf("%s\n", ret[2]);
}
