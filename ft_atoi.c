/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kael-mal <kael-mal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:52:56 by kael-mal          #+#    #+#             */
/*   Updated: 2025/10/20 10:59:36 by kael-mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int	i;
	long	ret;
	int	sign;

	i = 0;
	ret = 0;
	sign = 1;
	while (s[i] == ' ' || s[i] >= 9 && s[i] <= 13)
		i++;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i] && s[i] >= '0' && s[i] <= '9')
	{
		ret = ret * 10 + (s[i] - '0');
		i++;
		if (sign == 1 && ret > INT32_MAX)
			return INT32_MAX;
		if (sign == -1 && ret > (long)INT32_MAX + 1)
		return INT32_MIN;
	}
	return (sign * (int)ret);
}

int	main()
{
	char	*test;

	test = "-2147483650";
	printf("%d\n", atoi(test));
	printf("%d\n", ft_atoi(test));
}