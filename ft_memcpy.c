/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-ela <sben-ela@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:10:10 by sben-ela          #+#    #+#             */
/*   Updated: 2022/10/28 01:04:24 by sben-ela         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*str;
	char	*tab;

	i = 0;
	str = (char *)dst;
	tab = (char *)src;
	if (!src && !dst)
		return (NULL);
	while (i < n)
	{
		str[i] = tab[i];
		i++;
	}
	return (dst);
}
