/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 16:41:24 by mnurkass          #+#    #+#             */
/*   Updated: 2019/04/02 17:22:10 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int k;

	i = argc - 1;
	if (argc > 1)
	{
		while (i > 0)
		{
			k = 0;
			while (argv[i][k] != '\0')
			{
				ft_putchar(argv[i][k]);
				k++;
			}
			ft_putchar('\n');
			i--;
		}
	}
	return (0);
}
