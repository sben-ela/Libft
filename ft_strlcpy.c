/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-ela <sben-ela@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:52:24 by sben-ela          #+#    #+#             */
/*   Updated: 2022/10/24 11:17:25 by sben-ela         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	i;
	char	*src2;

	src2 = (char *)src;
	i = 0;
	srclen = 0;
	while (src2 [srclen])
		srclen ++;
	if (dstsize != 0)
	{
		while (dstsize - 1 > i && src2[i])
		{
			dst[i] = src2[i];
			i++;
		}
		dst [i] = '\0';
	}
	return (srclen);
}
