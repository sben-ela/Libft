/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-ela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:43:18 by sben-ela          #+#    #+#             */
/*   Updated: 2022/10/21 21:45:45 by sben-ela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*d;
	int		size;

	size = ft_strlen(s1) + 1;
	d = malloc(size);
	if (!d)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		d [i] = s1 [i];
		i ++;
	}
	d [i] = '\0';
	return (d);
}
