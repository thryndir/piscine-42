/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalloux <lgalloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:39:25 by lgalloux          #+#    #+#             */
/*   Updated: 2023/08/29 10:14:32 by lgalloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
		nb *= ft_recursive_power(nb, power - 1);
	return (nb);
}

/*int	main()
{
	int nb = -8;
	int power = 5;
	printf("la resultat est de %d", ft_recursive_power(nb, power));
}*/