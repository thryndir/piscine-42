/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalloux <lgalloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 12:20:20 by lgalloux          #+#    #+#             */
/*   Updated: 2023/08/21 20:03:34 by lgalloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i]) 
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	test1[] = "bambou";
	char	test2[] = "abeille";
	int results = ft_strcmp(test1, test2);
	if (results < 0)
	{
		printf("s1 est inferieur a s2");
	}
	if (results > 0)
	{
		printf("s1 est superieur a s2");
	}
	if (results == 0)
		printf("s1 est egal a s2");
}*/