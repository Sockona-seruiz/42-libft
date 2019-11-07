/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr_fd.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 14:16:52 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/07 12:27:59 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_2(int nb, int fd)
{
	int i;
	int tab[10];

	i = 0;
	while (nb >= 10)
	{
		tab[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	tab[i] = nb + '0';
	while (i >= 0)
	{
		write(fd, &tab[i], 1);
		i--;
	}
}

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(fd, "-2147483648", 11);
			return ;
		}
		write(fd, "-", 1);
		nb = nb * -1;
	}
	ft_putnbr_2(nb, fd);
}
