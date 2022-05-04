/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substrr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 01:21:20 by chenlee           #+#    #+#             */
/*   Updated: 2022/05/02 01:21:20 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, size_t start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	s_len;

	if (!s || len == 0)
		return (0);
	if (start > ft_strlen(s))
		return (0);
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (0);
	i = 0;
	while (i < len)
	{
		ptr[i] = s[i + start];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}