/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cancat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 15:59:23 by mnurkass          #+#    #+#             */
/*   Updated: 2019/04/03 22:50:03 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_str_count(int argc, char **argv)
{
	int i;
	int count;
	int k;

	i = 1;
	k = 0;
	count = 0;
	while (i < argc)
	{
		k = 0;
		while (argv[i][k] != '\0')
		{
			count++;
			k++;
		}
		i++;
	}
	return (count);
}

char	*result(int *p, int argc, char **argv)
{
	char	*c;
	int		co;

	co = get_str_count(argc, argv);
	c = malloc(sizeof(char) * (co + (argc - 1)));
	while (p[0] < argc)
	{
		p[2] = 0;
		while (argv[p[0]][p[2]] != '\0')
		{
			c[p[3]] = argv[p[0]][p[2]];
			p[2]++;
			p[3]++;
		}
		if ((co + 2) == p[3] || argc == 2)
			c[p[3]] = '\0';
		else
			c[p[3]] = '\n';
		p[3]++;
		p[0]++;
	}
	return (c);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*c;
	int		par[4];

	if (argc <= 1)
		return ("\0");
	par[0] = 1;
	par[2] = 0;
	par[3] = 0;
	par[1] = 0;
	c = "\0";
	if (argc > 1)
		c = result(par, argc, argv);
	return (c);
}
