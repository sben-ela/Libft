/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-ela <sben-ela@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:54:35 by sben-ela          #+#    #+#             */
/*   Updated: 2022/10/26 08:01:36 by sben-ela         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1 [i] || s2 [i]))
	{
		if ((unsigned char)s1 [i] != (unsigned char)s2 [i])
			return ((unsigned char)s1 [i] - (unsigned char)s2 [i]);
				i ++;
	}
	return (0);
}
