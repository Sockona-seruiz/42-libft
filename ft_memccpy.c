/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 16:52:53 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/06 12:09:33 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int			i;
	unsigned char			c2;
	const unsigned char		*src2;
	char					*dest2;

	i = 0;
	c2 = c;
	src2 = src;
	dest2 = dest;
	while (i < n)
	{
		if (src2[i] == c2)
		{
			dest2[i] = src2[i];
			return (dest2 + i + 1);
		}
		dest2[i] = src2[i];
		i++;
	}
	return (0);
}
