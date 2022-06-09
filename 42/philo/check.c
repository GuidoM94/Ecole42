/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmeoli <gmeoli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:26:46 by gmeoli            #+#    #+#             */
/*   Updated: 2022/06/09 17:51:47 by gmeoli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_contains_char(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if ((av[i][j] < '0' || av[i][j] > '9') \
				&& (av[i][j] != '-' && av[i][j] != '+' && av[i][j] != ' '))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_is_nbr_int(int nbr)
{
	return ((nbr >= (-__INT_MAX__ - 1) && nbr <= __INT_MAX__));
}

static int	ft_atoi_sign_check(const char *str, int i)
{
	int	s;

	s = 1;
	if (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			s *= -1;
		i += 1;
	}
	if (str[i] == 45 || str[i] == 43)
		return (0);
	return (s);
}

int	ft_atoi(const char *str)
{
	int					i;
	int					s;
	unsigned long long	res;

	i = 0;
	res = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	s = ft_atoi_sign_check(str, i);
	if (s == 0)
		return (0);
	while (str[i] == 45 || str[i] == 43)
		i++;
	while (str[i] > 47 && str[i] < 58)
		res = (res * 10) + (str[i++] - 48);
	if (res >= 9223372036854775808ULL)
	{
		if (s == 1)
			return (-1);
		else
			return (0);
	}
	return ((int)res * s);
}
