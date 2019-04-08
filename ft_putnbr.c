/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <mnurkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 09:54:33 by mnurkass          #+#    #+#             */
/*   Updated: 2019/04/07 10:18:02 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	dft_putnbr(int nb)
{
	char	c1;
	int		inter;
	int		nb_save;
	int		temp;

	nb_save = nb;
	inter = 1;
	while (nb / 10 > 0)
	{
		inter *= 10;
		nb = nb / 10;
	}
	nb = nb_save;
	while (inter > 0)
	{
		temp = nb / inter;
		c1 = (nb / inter) + '0';
		ft_putchar(c1);
		nb = nb % inter;
		inter = inter / 10;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	else if (nb == 2147483647)
	{
		ft_putchar('2');
		nb = 147483647;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb / 10 >= 1)
		dft_putnbr(nb);
	else
	{
		ft_putchar(nb + '0');
	}
}
