/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarosa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 02:35:09 by sarosa-b          #+#    #+#             */
/*   Updated: 2024/09/15 02:35:13 by sarosa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	j;

	if (min >= max)
		return (NULL);
	arr = malloc((max - min) * sizeof(int));
	i = 0;
	j = min;
	while (i < (max - min))
	{
		arr[i] = j;
		j++;
		i++;
	}
	return (arr);
}
