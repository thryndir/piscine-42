/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalloux <lgalloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:29:34 by lgalloux          #+#    #+#             */
/*   Updated: 2023/08/30 12:32:20 by lgalloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strslen(int size, char **strs)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (i < size)
	{
		result += ft_strlen(strs[i]);
		i++;
	}
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		strs_len;
	int		sep_len;
	int		i;

	strs_len = ft_strslen(size, strs);
	sep_len = ft_strlen(sep);
	i = 0;
	strs_len += sep_len * (size - 1);
	result = (char *)malloc((strs_len * (size != 0) + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i != size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}

/*int	main()
{
	int size = 2;
	char *strs[] = {"1234", "1234"};
	char *sep = "-";
	printf("%s", ft_strjoin(size, strs, sep));
}*/