/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 09:53:36 by zramahaz          #+#    #+#             */
/*   Updated: 2024/02/25 09:16:37 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//ajout de mon propre bibliotheque
#include "libft.h"

int	main(void)
{
	int	i;

	i = '2';
	if (ft_isprint(i) == 1)
		printf("vrai eee");
	else
		printf("faux eee");
	return (0);
}
