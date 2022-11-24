/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakin <hakin@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 10:47:51 by hakin             #+#    #+#             */
/*   Updated: 2022/07/24 13:53:48 by hakin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char charcik)
{
	write(1, &charcik, 1);
}

void	ft_putnbr(int sayi)
{
	if (sayi == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		sayi = 147483648;
	}
	if (sayi < 0)
	{
		ft_putchar('-');
		sayi *= -1;
	}
	if (sayi < 10)
	{
		ft_putchar(sayi + 48);
		return ;
	}
	else
		ft_putnbr(sayi / 10);
	ft_putnbr(sayi % 10);
}
