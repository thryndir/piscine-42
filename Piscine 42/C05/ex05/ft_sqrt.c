/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalloux <lgalloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:11:39 by lgalloux          #+#    #+#             */
/*   Updated: 2023/08/24 20:04:34 by lgalloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	mult;

	mult = 0;
	while (mult * mult != nb && mult <= 46340)
	{
		mult++;
	}
	if (mult * mult == nb)
		return (mult);
	else
		return (0);
}

/*int	main()
{
	int nb = 25;
	printf("la racine est de: %d", ft_sqrt(nb));
}*/