/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 15:31:48 by mnurkass          #+#    #+#             */
/*   Updated: 2019/04/03 08:17:41 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;

	if (argc > 0)
	{
		i = 0;
		while (argv[0][i])
		{
			ft_putchar(argv[0][i]);
			i++;
		}
		ft_putchar('\n');
		return (0);
	}
}
