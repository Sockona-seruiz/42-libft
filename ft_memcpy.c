/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 16:52:53 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 10:09:07 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

/*
** copies n bytes from memory area src to memory area dst
*/

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	const char		*src2;
	char			*dest2;

	i = 0;
	if (!src && !dest)
		return (0);
	src2 = src;
	dest2 = dest;
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest2);
}
