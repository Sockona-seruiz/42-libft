/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memset.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 13:14:17 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/06 12:00:17 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	char			*adr;
	unsigned char	ch;

	i = 0;
	ch = (unsigned char)c;
	adr = s;
	while (i < n)
	{
		adr[i] = ch;
		i++;
	}
	return (s);
}
