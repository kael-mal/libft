/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-mal <kael-mal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:00:28 by kael-mal          #+#    #+#             */
/*   Updated: 2025/10/20 11:00:30 by kael-mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char * s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n -1)
		i++;
	return (s1[i] - s2[i]);
}

// int	main()
// {
// 	char	*s1 = "test";
// 	char	*s2 = "t1st";
// 	printf("%d\n", ft_strncmp(s1, s2, 3));
// 	printf("%d\n", strncmp(s1, s2, 3));
// }