/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikia <cnikia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 19:15:45 by cnikia            #+#    #+#             */
/*   Updated: 2019/07/08 20:48:21 by cnikia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

int		ft_atoi(const char *str)
{
	size_t					a;
	unsigned long int		n;
	unsigned long int		b;
	int						sign;

	a = 0;
	n = 0;
	sign = 1;
	while ((str[a] == ' ') || (str[a] >= 9 && str[a] <= 13))
		a++;
	if (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			sign = -1;
		a++;
	}
	while (str[a] <= '9' && str[a] >= '0')
	{
		b = n;
		n = (n * 10) + (str[a] - '0');
		if (((n - (str[a] - '0')) / 10) != b)
			return (-1);
		a++;
	}
	return (n * sign);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int a;

	a = 0;
	while (str[a] != 0)
		a++;
	return (a);
}

void	ft_putstr(char const *s, t_pf **pf)
{
	if (!s)
		return ;
	while (*s)
	{
		ft_putchar(*s);
		((*pf)->b)++;
		s++;
	}
}

char	*ft_strchr(const char *s, int c)
{
	size_t	a;

	a = 0;
	while (s[a])
	{
		if (s[a] == c)
			return ((char *)s + a);
		a++;
	}
	if (s[a] == c)
		return ((char *)s + a);
	return (0);
}
