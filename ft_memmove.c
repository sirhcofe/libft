/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:13:44 by chenlee           #+#    #+#             */
/*   Updated: 2022/04/30 16:23:25 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dest;
	char	*srce;

	i = 0;
	dest = (char *)dst;
	srce = (char *)src;
	if (dst == src)
		return (dst);
	if (dest > srce)
	{
		while (len--)
			dest[len] = srce[len];
		return (dst);
	}
	while (i < len)
	{
		dest[i] = srce[i];
		i++;
	}
	return (dst);
}

/*
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*dst_c;
	const char	*src_c;
	char		*buffer;

	i = 0;
	buffer = malloc(sizeof(char) * len);
	dst_c = (char *)dst;
	src_c = (const char *)src;
	while (i < len)
	{
		buffer[i] = src_c[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		dst_c[i] = buffer[i];
		i++;
	}
	free(buffer);
	return (dst);
}
*/