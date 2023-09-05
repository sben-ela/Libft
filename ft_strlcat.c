/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-ela <sben-ela@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:46:29 by sben-ela          #+#    #+#             */
/*   Updated: 2022/10/28 13:10:18 by sben-ela         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	s;
	size_t	i;

	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (dstsize == 0 || dstsize <= d)
	{
		return (dstsize + s);
	}
	i = 0;
	while (dstsize - d - 1 > i && src [i])
	{
		dst [d + i] = src [i];
		i++;
	}
	dst [i + d] = '\0';
	return (d + s);
}
