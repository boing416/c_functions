/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 17:30:13 by mnurkass          #+#    #+#             */
/*   Updated: 2019/04/03 08:19:06 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if ((s1[i] == '\0' && s2[i] != '\0') || (s2[i] == '\0' && s1[i] != '\0'))
		return (s1[i] - s2[i]);
	return (0);
}

void	print(int argc, char **argv)
{
	int i;
	int k;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			k = 0;
			while (argv[i][k] != '\0')
			{
				ft_putchar(argv[i][k]);
				k++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}

int		main(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (i++ < (argc - 1))
	{
		if (i + 1 < argc && ft_strcmp(argv[i + 1], argv[i]) < 0)
		{
			argv[argc + 1] = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = argv[argc + 1];
			i = 0;
		}
	}
	print(argc, argv);
	return (0);
}
