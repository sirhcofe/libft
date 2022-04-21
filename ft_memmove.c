/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:13:44 by chenlee           #+#    #+#             */
/*   Updated: 2022/04/20 17:39:04 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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