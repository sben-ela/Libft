/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-ela <sben-ela@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 09:46:13 by sben-ela          #+#    #+#             */
/*   Updated: 2022/10/28 13:28:41 by sben-ela         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!haystack)
		return (NULL);
	if (needle [0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack [i] && i < len)
	{
		j = 0;
		if (haystack [i] == needle [j])
		{
			while (i + j < len && haystack [i + j] == needle [j])
			{
				j++;
				if (!needle [j])
					return ((char *)&haystack [i]);
			}
		}
		i++;
	}
	return (0);
}
