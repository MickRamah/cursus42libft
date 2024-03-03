/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:32:15 by zramahaz          #+#    #+#             */
/*   Updated: 2024/02/25 15:45:02 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <string.h>
#include <stdio.h>

void	ft_bzero(void *str, size_t size);

int	main()
{
	char	str1[20] = "bonjour";
	char	str2[20] = "bonjour";
	int	nb[20] = {0, 1, 2, 3, 4, 5, 6, 7};
	int	i;

	ft_bzero(str1 + 3, 2);
	bzero(str2 + 3, 2);
	ft_bzero(nb + 3, 8);
	i = -1;
	while (++i < 7)
		printf("str[%d] = %c\n ", i, str1[i]);
	printf("\n");
	i = -1;
	while (++i < 7)
		printf("str[%d] = %c\n ", i, str2[i]);
	printf("\n");
	i = -1;
	while (++i < 7)
		printf("str[%d] = %d\n ", i, nb[i]);
	return (0);
}*/

void	ft_bzero(void *str, size_t size)
{
	while (size--)
		*(char *)str++ = '\0';
}
