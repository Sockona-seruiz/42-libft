/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 16:52:53 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 10:08:05 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

/*
** unction locates the first occurrence of c in s
*/

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	char			c2;
	const char		*src2;

	i = 0;
	c2 = c;
	src2 = s;
	while (i < n)
	{
		if (src2[i] == c2)
		{
			return ((void *)(src2 + i));
		}
		i++;
	}
	return (0);
}
