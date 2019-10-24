/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 16:30:34 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/22 16:46:03 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_treatint(int n)
{
	int i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
	{
		i++;
		n = n * (-1);
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static	int		ft_aled(int n, char *result)
{
	if (n == 0)
	{
		result[0] = '0';
		return (1);
	}
	else if (n < 0)
	{
		result[0] = '-';
		return (1);
	}
	return (0);
}

static	char	*ft_minint(char *result)
{
	if ((result = ft_strdup("-2147483648")) == 0)
		return (0);
	return (result);
}

char			*ft_itoa(int n)
{
	char	*result;
	int		sign;
	int		i;
	int		j;

	result = NULL;
	sign = 0;
	if (n == -2147483648)
		return (ft_minint(result));
	i = ft_treatint(n);
	if ((result = (char *)malloc(sizeof(char) * (i + 1))) == 0)
		return (0);
	j = ft_aled(n, result);
	if (j == 1 && n != 0)
		n = n * -1;
	while (n > 0)
	{
		result[i - 1] = (n % 10) + 48;
		n = n / 10;
		i--;
		j++;
	}
	result[j] = '\0';
	return (result);
}
