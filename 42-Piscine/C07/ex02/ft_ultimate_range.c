/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakin <hakin@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 20:19:41 by hakin             #+#    #+#             */
/*   Updated: 2022/08/09 16:45:18 by hakin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}	
	size = max - min;
	*range = (int *)malloc(sizeof(int) * size);
	if (!(*range))
		return (-1);
	while (i < size)
	{
		*(*range + i) = min + i;
		i++;
	}
	return (size);
}
