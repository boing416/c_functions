/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 14:25:08 by mnurkass          #+#    #+#             */
/*   Updated: 2019/04/02 14:26:10 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int find;
	int remember;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		find = 0;
		if (str[i] == to_find[find])
		{
			remember = i;
			while (str[i] == to_find[find])
			{
				if (to_find[find + 1] == '\0')
					return (&str[remember]);
				find++;
				i++;
			}
			i = remember;
		}
		i++;
	}
	return (0);
}
