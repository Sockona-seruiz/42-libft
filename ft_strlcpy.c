/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 14:57:58 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/22 12:22:21 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int i;

	if (!src)
		return (0);
	i = 0;
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (src[i] != '\0')
	{
		if (i < size - 1)
			dst[i] = src[i];
		else if (i == size - 1)
			dst[i] = '\0';
		i++;
	}
	if (i < size)
		dst[i] = '\0';
	return (i);
}
