/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalloux <lgalloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:54:51 by lgalloux          #+#    #+#             */
/*   Updated: 2023/08/22 22:08:21 by lgalloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n--)
	{
		if (*s1 == '\0' || *s2 == '\0' || *s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

/*int	main(void)
{
	char	test1[] = "bambou";
	char	test2[] = "bambouda";
	int results = ft_strncmp(test1, test2, 5);
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