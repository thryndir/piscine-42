/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalloux <lgalloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 12:12:53 by lgalloux          #+#    #+#             */
/*   Updated: 2023/08/30 10:58:58 by lgalloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*range;
	int	i;

	size = max - min;
	if (size <= 0)
		return (NULL);
	range = (int *)malloc((size + 1) * sizeof (int));
	if (range == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}

/*int	main()
{
	int  min = -200;
	int max = 300;
	int i = 0;
	int *range = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d ", range[i]);
		i++;
	}
	free(range);
}*/