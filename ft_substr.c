/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:17:20 by zramahaz          #+#    #+#             */
/*   Updated: 2024/03/01 09:53:50 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	dest = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (dest[i])
	{
		dest[i] = s[start];
		start++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}*/

/*
	Reraka
	start = 2; len = 5;
	--> new_len = 6 + 2 = 8
	--> SI 8 < 5 --> len = 5
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*copy;
	size_t		i;
	size_t		new_len;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	new_len = ft_strlen(s + start);
	if (new_len < len)
		len = new_len;
	copy = malloc(len + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		copy[i] = s[start++];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}