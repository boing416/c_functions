/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 13:24:59 by mnurkass          #+#    #+#             */
/*   Updated: 2019/04/03 14:10:29 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str2;
	int		i;
	int		k;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	k = 0;
	str2 = (char*)malloc(sizeof(char) * (i + 1));
	while (k < i)
	{
		str2[k] = src[k];
		k++;
	}
	str2[k] = '\0';
	return (str2);
}
