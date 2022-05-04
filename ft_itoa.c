/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 18:44:54 by chenlee           #+#    #+#             */
/*   Updated: 2022/05/03 18:44:54 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_length(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n >= 10)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		sign;
	size_t	len;

	sign = (n < 0);
	len = (get_length(n) + 1);
	ptr = malloc(sizeof(char) * (len));
	if (!ptr)
		return (0);
	if (sign == 1)
	{
		ptr[0] = '-';
		n *= -1;
	}
	ptr[len] = '\n';
	while (n > 0)
	{
		ptr[len - 1] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	return (ptr);
}
