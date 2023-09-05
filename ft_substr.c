/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-ela <sben-ela@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:16:01 by sben-ela          #+#    #+#             */
/*   Updated: 2022/10/25 20:24:05 by sben-ela         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	unsigned int	len_s;
	char			*dest;
	int				size;

	len_s = 0;
	if (!s)
		return (0);
	while (s [len_s])
		len_s ++;
	if (len > len_s)
		size = len_s + 1;
	else
		size = len + 1;
	dest = malloc(size);
	if (!dest)
		return (0);
	i = 0;
	while (i < len && start < len_s)
	{
		dest [i ++] = s [start ++];
	}
	dest [i] = '\0';
	return (dest);
}
