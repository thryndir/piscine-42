/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalloux <lgalloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 15:48:16 by lgalloux          #+#    #+#             */
/*   Updated: 2023/08/24 18:54:51 by lgalloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	l_nb;

	l_nb = nb;
	if (l_nb < 0)
	{
		l_nb = l_nb * -1;
		write(1, "-", 1);
	}
	if (l_nb > 9)
		ft_putnbr(l_nb / 10);
	write(1, &(char){l_nb % 10 + '0'}, 1);
}

/*int	main()
{
	ft_putnbr(0);
}*/