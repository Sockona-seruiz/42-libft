/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 16:52:53 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/17 18:45:21 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

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
