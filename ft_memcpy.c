/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-m <acesar-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:02:35 by acesar-m          #+#    #+#             */
/*   Updated: 2024/10/08 12:10:09 by acesar-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t count);

void *ft_memcpy(void *dest, const void *src, size_t count)
{
	size_t i;
	unsigned char *d = (unsigned char *)dest;
	const unsigned char *s = (const unsigned char *)src;

	i = 0;
	while (i < count)
	{
		d[i] = s[i];
		i++;
	}
	
	d[i] = '\0';

	return (dest);
}
