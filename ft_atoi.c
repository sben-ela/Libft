/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-ela <sben-ela@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 09:45:14 by sben-ela          #+#    #+#             */
/*   Updated: 2022/10/27 20:55:05 by sben-ela         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_checkspace(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t'
		|| str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int		i;
	size_t	n;
	int		tmp;

	i = ft_checkspace(str);
	n = 0;
	tmp = 1;
	if (str[i] == '-')
	{
		i++;
		tmp = tmp * (-1);
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		n = n * 10 + (str[i] - 48);
		i++;
	}
	if (tmp == (-1) && n >= 9223372036854775807)
		return (0);
	else if (tmp == 1 && n >= 9223372036854775807)
		return (-1);
	return (n * tmp);
}
