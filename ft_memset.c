/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-ela <sben-ela@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:41:17 by sben-ela          #+#    #+#             */
/*   Updated: 2022/10/25 11:12:30 by sben-ela         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*d;

	d = (char *)b;
	i = 0;
	while (i < len)
	{
		d [i++] = (unsigned char)c;
	}
	return (d);
}
