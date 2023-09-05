/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-ela <sben-ela@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 01:20:17 by sben-ela          #+#    #+#             */
/*   Updated: 2022/10/25 16:37:20 by sben-ela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst2;
	char	*src2;

	dst2 = (char *)dst;
	src2 = (char *)src;
	if (!src2 && !dst2)
		return (NULL);
	if (src < dst)
	{
		src2 = src2 + len - 1;
		dst2 = dst2 + len - 1;
		while (len > 0)
		{
			*dst2 -- = *src2 --;
			len --;
		}
	}
	else if (src >= dst)
	{
		while (len --)
			*dst2 ++ = *src2 ++;
	}
	return (dst);
}
