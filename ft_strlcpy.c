/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:42:34 by zramahaz          #+#    #+#             */
/*   Updated: 2024/02/25 13:38:19 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <stdio.h>

size_t	ft_strlcpy(char *dest, char *src, size_t size);

*int	main(void)
{
	char	dest[50] = "bonjour tous le monde";
	char	src[10] = "bonjour";
	unsigned int	a;

	a = ft_strlcpy(dest, src, 2);
	printf("len = %d \n", a);
	return (0);
}*/

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;

	if (size == 0)
		return (ft_strlen(src));
	len = 0;
	while (*(src + len) && --size)
		*(dest++) = *(src + len++);
	*dest = '\0';
	while (*(src + len))
		++len;
	return (len);
}
