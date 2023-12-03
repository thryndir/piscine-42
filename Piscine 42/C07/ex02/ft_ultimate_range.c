/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalloux <lgalloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:51:59 by lgalloux          #+#    #+#             */
/*   Updated: 2023/08/30 12:26:30 by lgalloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	size = max - min;
	if (size <= 0)
		return (0);
	*range = (int *)malloc((size + 1) * sizeof (int));
	if (!range)
	{
		range = NULL;
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (size);
}

/*int	main()
{
	int  min = -200;
	int max = 300;
	int *range;
	printf("%d ", ft_ultimate_range(&range, min, max));
	free(range);
}*/