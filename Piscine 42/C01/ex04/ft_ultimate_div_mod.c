/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalloux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:33:08 by lgalloux          #+#    #+#             */
/*   Updated: 2023/08/14 11:33:13 by lgalloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*int	main()
{
	int a;
	int b;
	a = 24;
	b = 8;
	printf("Quand on divise %d par %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Le reste est: %d\n La resultat est: %d", b, a);
}*/
