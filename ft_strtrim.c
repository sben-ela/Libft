/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-ela <sben-ela@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:06:45 by sben-ela          #+#    #+#             */
/*   Updated: 2022/10/26 07:52:43 by sben-ela         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		size_s;
	char		*n;

	if (!set)
		return ((char *) s1);
	if (!s1)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1 ++;
	size_s = ft_strlen(s1);
	while (size_s && ft_strchr(set, s1[size_s]))
		size_s --;
	n = ft_substr((char *)s1, 0, size_s + 1);
	return (n);
}
