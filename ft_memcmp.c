/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 08:43:32 by zramahaz          #+#    #+#             */
/*   Updated: 2024/02/28 16:56:33 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	main(void)
{
	char	*s1 = "ABCDEFG";
	char	*s2 = "ABCDXYZ";
	int	res;

	res = 10;

	res = memcmp(s1, s2, 5);
	printf("%d", res);
	return (0);
}*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*d1;
	unsigned char	*d2;
	size_t			i;

	d1 = (unsigned char *)s1;
	d2 = (unsigned char *)s2;
	i = 0;
	while (n)
	{
		if (d1[i] != d2[i])
			return (d1[i] - d2[i]);
		n--;
		i++;
	}
	return (0);
}