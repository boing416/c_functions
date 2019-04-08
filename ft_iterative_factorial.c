/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 09:16:14 by mnurkass          #+#    #+#             */
/*   Updated: 2019/03/29 11:34:39 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int response;

	if (nb < 0 || nb >= 13)
		return (0);
	if (nb == 0)
		return (1);
	i = 1;
	response = 1;
	while (i <= nb)
	{
		response *= i;
		i++;
	}
	return (response);
}
