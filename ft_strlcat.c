/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:46:41 by zramahaz          #+#    #+#             */
/*   Updated: 2024/02/26 09:46:30 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t	ft_strlcat(char *dest, const char *src, size_t size);

int	main()
{
	return (0);
}*/

/*size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = -1;
	while (++i < size && *dest)
		dest++;
	if (i < size)
		return (i + ft_strlen((src)));
	j = -1;
	while (src[++j])
		if (j < size - i - 1)
			*dest++ = src[j];
	*dest = '\0';
	return (i + j);
}*/

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && (j + i + 1) < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (j < size)
		dest[i + j] = '\0';
	if (size <= i)
		return (ft_strlen(src) + size);
	else
		return (ft_strlen(src) + i);
}
