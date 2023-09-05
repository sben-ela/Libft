/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-ela <sben-ela@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:01:00 by sben-ela          #+#    #+#             */
/*   Updated: 2022/10/26 08:05:40 by sben-ela         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*dest;
	unsigned int	i;
	unsigned int	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	dest = malloc(slen + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (i < slen)
	{
		dest [i] = f(i, s [i]);
		i ++;
	}
	dest [i] = '\0';
	return (dest);
}
